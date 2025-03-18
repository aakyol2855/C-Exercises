#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef enum{
    bay,//0
    bayan//1
}gender;

typedef enum{
    pazartesi,
    sali,
    carsamba,
    cuma,
    cumartesi,
    pazar
}gunler;

typedef struct 
{
    int yas;
    char *isim;
    gender cinsiyet;
    gunler tatil;
} insan;

int emeklimi(insan *birey){
    printf(" %d %u\n",birey->yas,birey->cinsiyet);
    fflush(stdout);
    perror("gecti");
    if(birey->cinsiyet == bay && birey->yas>55)
        return 1;
    else if (birey->cinsiyet == bayan && birey->yas>50)
        return 1;
}

int main(){
    setlocale(LC_ALL,"tr_tr.UTF-8");


    int a;
    insan ali;
    ali.yas = 30;
    ali.tatil = sali;
    ali.cinsiyet= bayan;

    insan *veli;
    veli=(insan*)malloc(sizeof(insan));
    veli->yas = 60;
    veli->cinsiyet = bay;
    veli->tatil = pazartesi;

    printf("Şuan utf-8, c dili icin etkindir.\n");

    printf("Ali'nin yasi: %d\n", ali.yas);
    printf("Alinin tatil gunu : %u\n",ali.tatil);
    printf("Ali emekli mi? %d\n",emeklimi(&ali));

    if (ali.cinsiyet == bay) {
        printf("Ali erkektir.\n");
    } else if (ali.cinsiyet == bayan) {
        printf("Ali kadindir.\n");
    }

    printf("\n");

    printf("Veli'nin yasi: %d\n", veli->yas);
    printf("Velinin tatil gunu : %u\n",veli->tatil+1);
    printf("Veli emekli mi? %d\n",emeklimi(veli));

    if (veli->cinsiyet == bay) {
        printf("Veli erkektir.\n");
    } else if (veli->cinsiyet == bayan) {
        printf("Veli kadındır.\n");
    }

    free(veli);
    return 0;
}
