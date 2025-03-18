#include<stdio.h>
#include<string.h>

int main(){
	
	char arraystr[100]={0},mayback;
	int i,uzunlukstr;
	
	
	printf("Lutfen bir string giriniz : \n");
	scanf("%s",&arraystr);
	uzunlukstr=strlen(arraystr);
	
	for(i=0;i<uzunlukstr/2;i++){                   //for dongusunde uzunlugun yarisi olmasinin sebebi; stringin yarisina geldikten sonrasi simetriði olacagi icin tekrar isleme gerek yok.
		mayback=arraystr[i];                     //burada döngüde ilkten son harfe kadar her bir harfi, sýrasýyla yedekliyoruz.
		arraystr[i]=arraystr[uzunlukstr-i-1];    // burada da yedeklediðimiz harfin yerine, simetriðine düþen harfi yazdýrýyoruz. 
		arraystr[uzunlukstr-i-1]=mayback;        // burada da yukarý basamakta yazdýrdýðýmýz harfin yerine, bellekte yedeklediðimiz ilk harfi yazdýrýyoruz.
	}                                            //böylelikle for döngüsü içerisinde önce ; i yani 0. karakter yedekleniyor, sonra 0. karakter yerine uzunluk-i-1 karakteri atanýyor. En son olarak da uzunluk-i-1 karakterine yedeklenen yazdýrýlýyor.
	 
	printf("Girdiginiz stringin tersi : %s ",arraystr);
	return 0;
}
