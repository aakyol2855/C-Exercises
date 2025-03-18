#include <stdio.h>

int main() {
    int dogalsay[50], Teksay[50], Ciftsay[50], i;

    // Dizileri s�f�rla
    for (i = 0; i < 50; i++) {
        Ciftsay[i] = 0;
        Teksay[i] = 0;
    }

    // Say�lar� ay�rma
    for (i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            Ciftsay[i / 2 - 1] = i;  // �ift say�lar� dizisine ekle
        } else {
            Teksay[i / 2] = i;  // Tek say�lar� dizisine ekle
        }
    }

    // �ift Say�lar� yazd�rma
    printf("Cift Sayilar ;\n");
    for (i = 0; i < 25; i++) {  // �ift say�lar 25 adet olacak
        printf("%d\t", Ciftsay[i]);
    }

    printf("\nTek Sayilar;\n");
    for (i = 0; i < 25; i++) {  // Tek say�lar 25 adet olacak
        printf("%d\t", Teksay[i]);
    }

    return 0;
}

