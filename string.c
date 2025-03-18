#include<stdio.h>
#include<stdlib.h>

int main(){
    char isim[20];
    char *soyisim;
    soyisim=(char*)malloc(sizeof(char));
    scanf("%s",isim);
    scanf("%s",soyisim);
    printf("Tanistigimiza memnun oldum %s %s.",isim,soyisim);
    
    return 0;
}