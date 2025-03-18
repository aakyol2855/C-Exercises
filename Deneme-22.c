#include<stdio.h>

int main(){
    int num1,flag=0,check;
    printf("Please enter a number!\n");
    scanf("%d",&num1);
    for(int i=2;i<num1;i++){
        check=num1%i;
        if(check==0) {
            flag+=1;
        }
    }
    printf("%d",flag);
    if(flag>0) printf("The number which you entered is a prime number!");
    else printf("The number which you entered is not a prime number!");

    return 0;
}