#include<stdio.h>

int main(){
	//x=v*t ise v=x/t
	int time,x;
	printf("Please enter arrival time and lenght(First time) of road for calculate speed : \n");
	scanf("%d %d",&time,&x);
	printf("Speed required to reach --> %d",(x/time));
	
	return 0;
}
