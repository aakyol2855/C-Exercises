#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <semaphore.h>
#include <string.h>

#define SHM_NAME "/mpi_shared_memory"
#define SEM_FULL "/sem_full"
#define SEM_EMPTY "/sem_empty"
#define BUFFER_SIZE 256 // bellek boyutunu onceden define ediyoruz.

//kullanilan bircok fonksiyon, my_mpirun adli c dosyasinda kodlanmistir.
//mpi icin mesaj gonderme foksiyonu
void mpi_send(int rank, const char *message) {
    int shm_fd = shm_open(SHM_NAME, O_RDWR, 0666);
    if (shm_fd < 0) {
        perror("shm_open");
        return;
    }
	// paylasýmlý bellegin mapping islemi burada yapiliyor.
    char *shared_memory = (char*) mmap(0, BUFFER_SIZE, PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (shared_memory == MAP_FAILED) {//hata kontrolu
        perror("mmap");
        close(shm_fd);
        return;
    }
	//Semaforlari aciyoruz.
    sem_t *sem_full = sem_open(SEM_FULL, 0);
    sem_t *sem_empty = sem_open(SEM_EMPTY, 0);
    if (sem_full == SEM_FAILED || sem_empty == SEM_FAILED) {//hata kontolleri
        perror("sem_open");
        munmap(shared_memory, BUFFER_SIZE);
        close(shm_fd);
        return;
    }

    // Boþ bir slot için bekle
    sem_wait(sem_empty);

    // Kritik bölüm: paylaþýmlý belleðe yaz
    strncpy(shared_memory, message, BUFFER_SIZE);
    printf("Rank %d sent message to rank %d: %s\n", rank, (rank % 2 == 0) ? (rank + 1) : (rank - 1), message);

    //  Tam sinyalini gönder
    sem_post(sem_full);

    munmap(shared_memory, BUFFER_SIZE);
    close(shm_fd);
}

//mpi icin mesaj alma fonksiyonu
void mpi_recv(int rank) {
	// Shared memory'i aciyoruz.
    int shm_fd = shm_open(SHM_NAME, O_RDONLY, 0666);
    if (shm_fd < 0) {
        perror("shm_open");
        return;
    }

    char *shared_memory = (char*) mmap(0, BUFFER_SIZE, PROT_READ, MAP_SHARED, shm_fd, 0);
    if (shared_memory == MAP_FAILED) {
        perror("mmap");
        close(shm_fd);
        return;
    }

    sem_t *sem_full = sem_open(SEM_FULL, 0);
    sem_t *sem_empty = sem_open(SEM_EMPTY, 0);
    if (sem_full == SEM_FAILED || sem_empty == SEM_FAILED) {
        perror("sem_open");
        munmap(shared_memory, BUFFER_SIZE);
        close(shm_fd);
        return;
    }
r
    sem_wait(sem_full);

    // Kritik bölüm: paylaþýmlý bellekten oku
    printf("Rank %d received message from rank %d: %s\n", rank, (rank % 2 == 0) ? (rank + 1) : (rank - 1), shared_memory);

    sem_post(sem_empty);

    munmap(shared_memory, BUFFER_SIZE);
    close(shm_fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        // Terminalden gerekli argüman alýnmazsa hata mesajý yazdýr
        fprintf(stderr, "Usage: %s <rank>\n", argv[0]);
        return 1;
    }

    int rank = atoi(argv[1]);// Terminalden alinan rank(process sayisi) degeri

	//burada proje icerisinde verilen isterler icin if else statementleri bulunuyor. Eger cift ise bir sonraki
	//ile send ve recieve; tek ise bir onceki ile send ve recieve islemi yapiyor.
    if (rank % 2 == 0) {
        if (rank + 1 < 10) {
            mpi_send(rank, "hello");
            mpi_recv(rank);
        }
    } else {
        mpi_recv(rank);
        mpi_send(rank, "hello");
    }

    return 0;
}
