#include<stdio.h>

int main(){
	
	char letter;
	
	printf("Please enter a letter for checking that is vowel or not : \n");
	scanf("%c",&letter);
	if(letter == 'a' || letter =='e'||letter == 'ý' || letter =='o'||letter == 'u' || letter =='A'||letter == 'E' || letter =='I'||letter == 'O' || letter =='U' )
		printf("%c is a vowel.",letter);
	else printf("%c is not a vowel.",letter);
	
	return 0;
}


