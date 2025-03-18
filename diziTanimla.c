#include <stdio.h>

void kopyala_dizi(int* kaynak, int* hedef, int eleman_sayisi, int cift_mi) {
    int i;
    if (cift_mi) {
        for (i = 0; i < eleman_sayisi; i++) {
            hedef[i] = kaynak[eleman_sayisi - 1 - i];
        }
    } else {
        for (i = 0; i < eleman_sayisi; i++) {
            hedef[i] = kaynak[i];
        }
    }
}

int main() {
    int i;
    int kaynak[] = {1, 2, 3, 4, 5}; 
    int eleman_sayisi = sizeof(kaynak) / sizeof(kaynak[0]); 

    int hedef[eleman_sayisi]; 

    int cift_mi = eleman_sayisi % 2 == 0 ? 1 : 0; 

    kopyala_dizi(kaynak, hedef, eleman_sayisi, cift_mi); 

    printf("Kaynak Dizi: ");
    for (i = 0; i < eleman_sayisi; i++) {
        printf("%d ", kaynak[i]); 
    }

    printf("\nHedef Dizi: ");
    for (i = 0; i < eleman_sayisi; i++) {
        printf("%d ", hedef[i]); 
    }

    return 0;
}

