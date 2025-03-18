#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	int i,j,random;
	char Alfabe[65];
	printf("Dizideki hafler sira ile soyledir ->");
	for(i=65;i<=90;i++){
		
		for(j=0;j<=1;j++) if(i%5==0){ printf ("\t\t") ; printf("\n");}
		printf("%c%c  ",i,i+32);
		
		
		Alfabe[i-65]=i;
	}
	for(i=97;i<=122;i++){
		Alfabe[i-71]=i;
	}		
	printf("\n dizi %s ",Alfabe);
	random=rand()%52;
	printf("\n");
	for(i=0;i<=15;i++) printf(" ___ ");
	printf("\n\n");
	printf("\n\t\t\tRastgele secilen harf -->  %c  ",Alfabe[random]);
	printf("\n\n");
	for(i=0;i<=15;i++) printf(" ___ ");
	return 0;
}
