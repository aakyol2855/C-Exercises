#include<stdio.h>
#include<math.h>

int main(){
	//sqrt kök alma
	int x1,y1,x2,y2,d,xler,yler;
	printf("2 adet (x,y) koordinati giriniz. ");
	printf("\nilk koordinatlari giriniz : \n");
	scanf("%d %d",&x1,&y1);
	printf("\nikinci koordinatlari giriniz : \n");
	scanf("%d %d",&x2,&y2);
	d=sqrt((x1-x2)^2)+((y1-y2)^2);
	printf("\n%d\n",d);
	printf("Aralarindaki uzaklik --> %d",d);
	return 0;
}
