#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(NULL));  // Rastgele say� �reticisini ba�lat

    int tip1, tip2;
    char karma[6];  // 5 karakter + null sonland�r�c�
    char kromozom[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";

    // �lk 5 rastgele karakteri se� ve ekrana yazd�r
    for (tip1 = 0; tip1 < 5; tip1++) {
        char randomChar = kromozom[rand() % 53];
        printf(" %c ", randomChar);
        karma[tip1] = randomChar;
    }

    karma[5] = '\0';

    printf("\nbirey: %s\n", karma);

    return 0;
}

