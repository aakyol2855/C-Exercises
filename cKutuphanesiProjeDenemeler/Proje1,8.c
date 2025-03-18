#include<stdio.h>

int main(){
	int id1;
	printf("Please enter a number for check even or odd : \n");
	scanf("%d",&id1);
	if(id1%2== 0){
	printf("%d --> number is even.",id1);
	}
	else printf("%d --> number is odd",id1);
	
	return 0;
}
