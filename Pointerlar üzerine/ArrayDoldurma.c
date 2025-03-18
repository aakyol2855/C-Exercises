#include<stdio.h>

int main(){
	
	int array[25],scaleOf,i;
	printf("Lutfen Array buyuklugunu giriniz : ");
	scanf("%d",&scaleOf);
	
	printf("Lutfen %d adet sayi giriniz : \n",scaleOf);
	for(i=0;i<scaleOf;i++){
		printf("\n%d . Eleman -> ",i+1);
		scanf("%d",array+i);
	}
	printf("Elemanlar sirayla soyle :  \n",scaleOf);
	for(i=0;i<scaleOf;i++){
		printf("\n %d . Eleman -> %d ",i+1,*(array+i));
	}
	
	return 0;
}
