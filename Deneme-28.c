#include<stdio.h>

int main(){
    int prime1,prime2;
    printf("Please enter two number : ");
    scanf("%d %d",&prime1,&prime2);
    if(prime1%2==0 && prime2%2!=0) printf("%d number is prime and %d is not",prime2,prime1);
    else if(prime2%2==0 && prime1%2!=0) printf("%d number is prime and %d is not",prime1,prime2);
    else if(prime1%2==2 && prime2%2==0) printf("Both number is not prime");
    else printf("Both of them is prime!");
    return 0;
}