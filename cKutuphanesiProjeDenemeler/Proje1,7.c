#include<stdio.h>

int main(){
	
	int age,mounth,week,day,hour,second;
	printf("Please enter u'r age : \n");
	scanf("%d",&age);
	mounth=age*12;
	week=mounth*4;
	day=week*7;
	hour=day*24;
	second=hour*60;
	printf("%d mounth,%d week,%d day,%d hours and %d seconds pass since you were born.",mounth,week,day,hour,second);
	return 0;
}
