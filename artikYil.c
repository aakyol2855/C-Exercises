#include <stdio.h>

int main() {
    int sayi, artik;
    
    // Kullan�c�dan y�l bilgisini al
    printf("Artik yil olup olamdigini merak ettiginiz sayiyi giriniz: ");
    scanf("%d", &sayi);

    // Art�k y�l kontrol�
    if ((sayi % 400 == 0) || (sayi % 4 == 0 && sayi % 100 != 0)) {
        printf("Girilen yil artik yildir. Girilen yil => %d\n", sayi);
    } else {
        printf("Girilen yil artik yil degildir. Girilen yil => %d\n", sayi);
    }

    return 0;
}

