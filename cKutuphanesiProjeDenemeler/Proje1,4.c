#include<stdio.h>

int main(){
	
	int rectangle1,rectangle2;
	printf("Please enter two edge of rectangle(first short edge) for calculate area and edge lenght of rectangle : \n");
	scanf("%d %d",&rectangle1,&rectangle2);
	printf("Rectangle's edge lenght is --> %d",(rectangle1*2)+(rectangle2*2));
	printf("\nRectangle's area is --> %d ",rectangle1*rectangle2);
	return 0;
}
