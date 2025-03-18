#include <stdio.h>

int main() {
    int dogalsay[50], Teksay[50], Ciftsay[50], i;

    // Dizileri sýfýrla
    for (i = 0; i < 50; i++) {
        Ciftsay[i] = 0;
        Teksay[i] = 0;
    }

    // Sayýlarý ayýrma
    for (i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            Ciftsay[i / 2 - 1] = i;  // Çift sayýlarý dizisine ekle
        } else {
            Teksay[i / 2] = i;  // Tek sayýlarý dizisine ekle
        }
    }

    // Çift Sayýlarý yazdýrma
    printf("Cift Sayilar ;\n");
    for (i = 0; i < 25; i++) {  // Çift sayýlar 25 adet olacak
        printf("%d\t", Ciftsay[i]);
    }

    printf("\nTek Sayilar;\n");
    for (i = 0; i < 25; i++) {  // Tek sayýlar 25 adet olacak
        printf("%d\t", Teksay[i]);
    }

    return 0;
}

