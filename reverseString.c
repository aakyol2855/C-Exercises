#include<stdio.h>
#include<string.h>

int main(){
	
	char arraystr[100]={0},mayback;
	int i,uzunlukstr;
	
	
	printf("Lutfen bir string giriniz : \n");
	scanf("%s",&arraystr);
	uzunlukstr=strlen(arraystr);
	
	for(i=0;i<uzunlukstr/2;i++){                   //for dongusunde uzunlugun yarisi olmasinin sebebi; stringin yarisina geldikten sonrasi simetriği olacagi icin tekrar isleme gerek yok.
		mayback=arraystr[i];                     //burada döngüde ilkten son harfe kadar her bir harfi, sırasıyla yedekliyoruz.
		arraystr[i]=arraystr[uzunlukstr-i-1];    // burada da yedeklediğimiz harfin yerine, simetriğine düşen harfi yazdırıyoruz. 
		arraystr[uzunlukstr-i-1]=mayback;        // burada da yukarı basamakta yazdırdığımız harfin yerine, bellekte yedeklediğimiz ilk harfi yazdırıyoruz.
	}                                            //böylelikle for döngüsü içerisinde önce ; i yani 0. karakter yedekleniyor, sonra 0. karakter yerine uzunluk-i-1 karakteri atanıyor. En son olarak da uzunluk-i-1 karakterine yedeklenen yazdırılıyor.
	 
	printf("Girdiginiz stringin tersi : %s ",arraystr);
	return 0;
}
