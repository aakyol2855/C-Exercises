#include<stdio.h>

int main(){
	
	int kareninAlani,kareninKenari;
	printf("Karenin alaninin hesaplatan program.");
	
	printf("\nLutfen karenin bir kenarini giriniz : ");
	scanf("%d",&kareninKenari);
	kareninAlani = kareninKenari*kareninKenari;
	printf("\nGirilen karenin alani : %d",kareninAlani);
	
	return 0;
	
	
}
