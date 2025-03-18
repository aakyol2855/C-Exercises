#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct kayit
{
	char isim[30];
	int no;
	int sinif;
	float ort;
}; struct kayit ogr;


int main(){
	
	printf("Adiniz ve soyadinizi giriniz : ");
	gets(&ogr.isim);
		
	printf("Numaranizi giriniz : ");
	scanf("%d",&ogr.no);
		
	printf("Sinifinizi giriniz : ");
	scanf("%d",&ogr.sinif);
	
	printf("Ortalamanizi giriniz : ");
	scanf("%f",&ogr.ort);
	puts(ogr.isim);
	printf("Numaraniz => %d\nSinifiniz => %d",ogr.no,ogr.sinif);
	printf("\nOrtalamaniz => %.1f",ogr.ort);
	return 0;
}
