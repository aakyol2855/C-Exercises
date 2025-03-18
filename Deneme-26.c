#include<stdio.h>

int main(){

    int function,flag=1;
    printf("Please enter a number for calculate function of that number :");
    scanf("%d",&function);

    for(int i=1;i<=function;i++){
        printf("%d*",i);
        flag=i*flag;
    }
    printf("Result ==> %d",flag);

    return 0;
}