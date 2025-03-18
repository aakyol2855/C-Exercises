#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *dosya;
    
    dosya=fopen("deneme.txt","w");
    char isim[]="Ayşe";
    fputs("Merhaba Dunya",dosya);
    
    fprintf(dosya,"\nBu dosya %s'nin dosyasidir.",isim);

    fclose(dosya);

    return 0;
}