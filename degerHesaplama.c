#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,c,girdi,i;
	
	printf("Bu bir deneme denemesidir.\n");
	printf("Hesaplamak istediginiz veriyi giriniz : ");
	scanf ("%d",&girdi);
	
	printf("Alinan girdi ; %d \n",girdi);
	
	//Sayinin karesi burada aliniyor;
	a=girdi*girdi;
	printf("Sayinin karekoku ; %d\n",a);
	
	//Sayi tek mi cift mi burada kontrol ediyoruz.
	if(girdi%2==0) printf ("Girilen sayi cifttir.\n");
	else printf("Girilen sayi tektir.\n");
	
	//Simdi bir for dongusu kullanarak sayinin asal carpanlari bulunacak;
	printf("Sayinin asal carpanlari su sekildedir : \n");
	for(i=2;girdi>1;i++){
		while(girdi%i==0){
			printf("%d \t",i);
			girdi=girdi/i;
		}
	}
	
	return 0;
	
}
