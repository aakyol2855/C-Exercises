#include<stdio.h>

int main(){
	int note;
	
	printf("Please enter your exam grade : \n");
	scanf("%d",&note);
	
	if( note >= 80 && note <=100) 
		printf("Brilliant exam grade --> %d",note);
	else if ( note >= 50 && note < 80)
		printf("Not bad but you should study hard little bit --> %d",note);
	else if ( note >=0 && note < 50)
		printf("You failed this exam. You should study hard as soon as possible --> %d",note);
	else printf("An Error Has Been Detected !!!");
	
	return 0;
}

