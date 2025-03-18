#include<stdio.h>

int main(){
	
	int id1,id2,Toplam;
	printf("CallbyReferance ile Toplama\n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
	
	printf("Lutfen ilk sayiyi giriniz : ");
	scanf("%d",&id1);
	printf("\nLutfen ikinci sayiyi giriniz : ");
	scanf("%d",&id2);
	
	int *ptr1 = &id1, *ptr2 = &id2;
	Toplam=CBR(&id1,&id2);
	
	printf("\n%d ile %d sayisinin toplami %d 'dir.",*ptr1,*ptr2,Toplam);
	
	return 0;
}

int CBR(int *id3, int *id4){
	int Toplam;
	Toplam = *id3+*id4;
	return Toplam;
}
