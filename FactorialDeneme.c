#include<stdio.h>

int main(){
	
	int i,number,factorial;
	printf("Please enter a number for calculate factorial \n");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++) factorial*=i;
	printf("%d! --> %d",number,factorial);
	
	return 0;
}
