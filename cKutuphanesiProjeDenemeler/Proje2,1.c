#include<stdio.h>

int main(){
	
	int age;
	printf("Please enter your age for check is your age enough for vote : \n");
	scanf("%d",&age);
	if(age>=18) printf("Your age enough for vote.");
	else printf("Your age is not enough for vote");
	
	return 0;
}
