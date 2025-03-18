#include<stdio.h>

int main(){
	//internet bankacýlýðý giriþi denemesidir.
	
	char KullaniciAdi[50];//Kullanici adi icin matris kullanmali ki birden fazla kullanici adi alabilesin
	int HesapNo[50],Sifre[6],GorK;
	
	printf("HasGerYar bankaciliga hosgeldiniz.");
	printf("\n Giris yapmak icin bir(1), kayit olmak icin iki(2)ye basiniz.");
	scanf("%d",&GorK);
	if(GorK==1){
		printf("Degerli Kullanicimiz, Hosgeldiniz. Lutfen Kullanici adinizi giriniz : ");
	}
	
	
	return 0;
}
