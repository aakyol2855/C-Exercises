#include<stdio.h>

int main(){
	
	char week[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int dayNumber;
	printf("Please enter a number :\n");
	scanf("%d",&dayNumber);
	
	printf("equal in weekday is --> %s",week[dayNumber-1]);
	
	return 0;
}
