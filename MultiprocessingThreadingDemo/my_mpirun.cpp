#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <semaphore.h>
#include <string.h>

#define SHM_NAME "/mpi_shared_memory"
#define SEM_FULL "/sem_full"
#define SEM_EMPTY "/sem_empty"
#define BUFFER_SIZE 256


// Prosesleri oluþturma fonksiyonu
void create_processes(int num_processes, const char* program) {
    for (int i = 0; i < num_processes; ++i) {
        pid_t pid = fork();// Yeni bir child process oluþturuyoruz.
        if (pid == 0) {// Child process kodu
            char rank[25]; // Rakamlari ve null karakteri tutmak icin yeterli buyuklukte bir rank degiskeni olusturuyoruz.
            snprintf(rank, sizeof(rank), "%d", i);
            execlp(program, program, rank, NULL);
            perror("execlp failed");
            exit(1); // Eger fork islemi basarisiz olursa child process sonlandirilir.
        } else if (pid < 0) {
            perror("fork failed");
            exit(1);
        }
    }

    for (int i = 0; i < num_processes; ++i) {
        wait(NULL); // Tüm child processlerin bitmesini bekliyoruz.
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {// Komut satýrýndan gerekli argümanlar alýnmazsa hata mesajý yazdýrýr
        fprintf(stderr, "KullanÄ±m: %s <num_processes> <program_name>\n", argv[0]);
        return 1;
    }

    int num_processes = atoi(argv[1]); // Komut satirindan gelen proses sayisi
    const char *program_name = argv[2];

    // Paylaþýmlý bellek oluþturma
    int shm_fd = shm_open(SHM_NAME, O_CREAT | O_RDWR, 0666);
    if (shm_fd < 0) {
        perror("shm_open"); // Hata durumunda hata mesajý yazdýrýr.
        return 1;
    }
    ftruncate(shm_fd, BUFFER_SIZE);// Bellek boyutununu ayarlýyoruz.
    char *shared_memory = (char*) mmap(0, BUFFER_SIZE, PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (shared_memory == MAP_FAILED) {
        perror("mmap");
        close(shm_fd);// dosya tanýtýcýyý kapatýr.
        return 1;
    }
    memset(shared_memory, 0, BUFFER_SIZE);

    //  Semaforlarý oluþturma
    sem_t *sem_full = sem_open(SEM_FULL, O_CREAT, 0666, 0); //full semaforu olusturuyoruz.
    sem_t *sem_empty = sem_open(SEM_EMPTY, O_CREAT, 0666, 1);//empty semaforunu oluþturuyoruz.
    if (sem_full == SEM_FAILED || sem_empty == SEM_FAILED) {
        perror("sem_open");
        munmap(shared_memory, BUFFER_SIZE);
        close(shm_fd);
        return 1;
    }

    // Prosesleri oluÅŸturma
    create_processes(num_processes, program_name); //child prosessler olusturulur.

    // Temizlik
    munmap(shared_memory, BUFFER_SIZE);
    close(shm_fd);
    shm_unlink(SHM_NAME);
    sem_close(sem_full);
    sem_unlink(SEM_FULL);
    sem_close(sem_empty);
    sem_unlink(SEM_EMPTY);//Tum kapatma ve temizleme islemlerini gerceklestiriyoruz.

    return 0;
}
