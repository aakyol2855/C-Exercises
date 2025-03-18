#include<stdio.h>

int main(){
	
	int radius,area,Lenght;
	float pi=3.14;
	printf("Please enter radius for calculate circle's area and edge lenght : \n");
	scanf("%d",&radius);
	area=pi*(radius*radius);
	Lenght=2*pi*radius;
	printf("Circlu's area --> %d \n Circle's lenght --> %d",area,Lenght);
	return 0;
}
