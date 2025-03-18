#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	char Alfabe[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z'};
	int diziUzunlugu,i,random;
	srand(time(NULL));
	
	diziUzunlugu=(sizeof Alfabe / sizeof *Alfabe);
	
	printf("char dizisi uzunlugu : %d",diziUzunlugu);
		
	random=rand()%24;
		
		
    int temp=Alfabe[random];
		
	printf("\nRastgele secilen harf : %c",temp);		
	
	
	return 0;
}
