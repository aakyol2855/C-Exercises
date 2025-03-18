#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(NULL));

    int tip1, tip2, i;
    char karma[11];  // 10 karakter + null terminator
    char genotip1, genotip2;
    char kromozom[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";

    printf("Secilen birinci gen tipleri -->");
    for (tip1 = 0; tip1 < 5; tip1++) {
        genotip1 = kromozom[rand() % 53];
        printf(" %c ", genotip1);
        karma[tip1] = genotip1;
    }
    printf("\n");

    printf("Secilen ikinci gen tipleri -->");
    for (tip2 = 0; tip2 < 5; tip2++) {
        genotip2 = kromozom[rand() % 53];
        printf(" %c ", genotip2);
        karma[tip2 + 5] = genotip2;
    }
    printf("\n--------------------------------\n");

    karma[10] = '\0';  // Dizinin sonuna null terminator ekleyelim

    printf("\nBireyin genotipi -->");
    for (i = 0; i < 10; i++) {
        printf(" %c ", karma[i]);
    }
    
    printf("\n");

    return 0;
}

