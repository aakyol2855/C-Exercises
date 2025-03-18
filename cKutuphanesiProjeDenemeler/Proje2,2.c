#include<stdio.h>

int main(){
	
	int year,calc;
	printf("Please enter a year for calculate is that leap year : \n");
	scanf("%d",&year);
	calc=year%1000;
	calc=year%100;
	if(year%4==0) printf("%d year is a leap year.",year);
	else printf("%d year is not a leap year.",year);
	
	
	return 0;
}
