#include<stdio.h>
#include<string.h>

int main(){
	
	char arraystr[100]={0},mayback;
	int i,uzunlukstr;
	
	
	printf("Lutfen bir string giriniz : \n");
	scanf("%s",&arraystr);
	uzunlukstr=strlen(arraystr);
	
	for(i=0;i<uzunlukstr/2;i++){                   //for dongusunde uzunlugun yarisi olmasinin sebebi; stringin yarisina geldikten sonrasi simetri�i olacagi icin tekrar isleme gerek yok.
		mayback=arraystr[i];                     //burada d�ng�de ilkten son harfe kadar her bir harfi, s�ras�yla yedekliyoruz.
		arraystr[i]=arraystr[uzunlukstr-i-1];    // burada da yedekledi�imiz harfin yerine, simetri�ine d��en harfi yazd�r�yoruz. 
		arraystr[uzunlukstr-i-1]=mayback;        // burada da yukar� basamakta yazd�rd���m�z harfin yerine, bellekte yedekledi�imiz ilk harfi yazd�r�yoruz.
	}                                            //b�ylelikle for d�ng�s� i�erisinde �nce ; i yani 0. karakter yedekleniyor, sonra 0. karakter yerine uzunluk-i-1 karakteri atan�yor. En son olarak da uzunluk-i-1 karakterine yedeklenen yazd�r�l�yor.
	 
	printf("Girdiginiz stringin tersi : %s ",arraystr);
	return 0;
}
