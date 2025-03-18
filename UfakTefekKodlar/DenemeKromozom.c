#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(NULL));  // Rastgele sayý üreticisini baþlat

    int tip1, tip2;
    char karma[6];  // 5 karakter + null sonlandýrýcý
    char kromozom[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";

    // Ýlk 5 rastgele karakteri seç ve ekrana yazdýr
    for (tip1 = 0; tip1 < 5; tip1++) {
        char randomChar = kromozom[rand() % 53];
        printf(" %c ", randomChar);
        karma[tip1] = randomChar;
    }

    karma[5] = '\0';

    printf("\nbirey: %s\n", karma);

    return 0;
}

