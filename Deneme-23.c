#include<stdio.h>

int main(){
    int flag=0,i,j;
    for(i=0;i<25;i++){
        printf("%d\t",i+1);
    }

    printf("\n");

    for(j=1;j<26;j++)
    {
        printf("%d\t",26-j);
    }
    return 0;
}