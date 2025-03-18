#include<stdio.h>

int main() {
	
	char kullaniciadi[50];
	int sifre=258654,hesapnumarasi,i;
	
	printf("%d\n",sifre);
	
	printf("kullanici adi girin: ");
	scanf("%s",&kullaniciadi);
	
	printf("hesap numarasi girin: ");
	scanf("%s",&hesapnumarasi);
	a:
	printf("sifrenizi girin: ");
	scanf("%d",&sifre);
	
		
	if(sifre == 258654 ){
		printf("Sifre dogru");
		printf("\n%s hosgeldiniz. hesabinizda 750 tl bulunmaktadir.",&kullaniciadi);
		
	} 
	
	else if(sifre!=258654){
	printf("Sifre hatali. Lutfen tekrar deneyin.\n");
	goto a;
	}
	
	
	
	return 0;
}
