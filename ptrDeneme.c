#include<stdio.h>

int main(){
	
	int size;
	printf("Lutfen array icin bir size degeri giriniz: ");
	scanf("%d",&size);
	
	int * numbers = (int *)malloc(size * sizeof(int));
	
	if(numbers != NULL){
		printf("Bellekte yer ayrildi ! \n");
		printf("Arrayin boyutu --> %d \n",size);
	}
	
	int newsize;
	printf("Lutfen oncekinden farkli bir size degeri giriniz : ");
	scanf("%d",&newsize);
	
	int * tmp = (int * )realloc(numbers, newsize * sizeof(int));
	
	if(numbers != NULL){
		printf("Yeni size degeri icin bellekte yer ayrildi ! \n");
		printf("Array'in yeni boyutu --> %d",newsize);
		
	}
	
	return 0;
}
