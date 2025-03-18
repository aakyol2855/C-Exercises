#include <stdio.h>
#include <stdlib.h>
//faktoriyel almak icindir. Temel mantik f(x)={  n=0, 1
//												 n>1, n*f(n-1)
//							Fonkisyonunun islemini yapmaktir.

int func(int num) {		//baþlangic kontrolleri icin
	
	int res = 0;
	
	if ( num <= 0) {
		printf("\n hata!\n");
		
	}
	else if ( num == 1 ){
		return num;
	}
	
	else {
		res = num * func(num -1 );
		return res;
	}
	
	return -1;
	
}

int main (){ //Faksoriyel icin sayi alimi ve sonucun belirlenmesi
	
	int num,basamaksay;
	
	printf("Lutfen carpinimi alinacak bir sayi giriniz : \n");
	
	scanf("%d",&num);
	
	basamaksay=1;
	
	int fact = func (num) ;
	
	while(fact > 0){ 
        fact = fact / 10;
        basamaksay++;  
    }
	
	fact = func (num) ;
	
	if (fact > 0){
		
		printf("\n[%d] nin carpinimi : [%d]'dir. \n",num , fact);
		
		printf("[%d]'nin basamak sayisi : [%d]'dir. \n",fact,basamaksay-1);
	}

	return 0;
	
}
