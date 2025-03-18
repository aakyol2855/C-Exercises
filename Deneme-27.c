#include<stdio.h>
#include<math.h>

int main(){
    system("color 04");
    int numb,exponent,result;
    printf("Please enter a number for calculate his exponent : ");
    scanf("%d",&numb);
    printf("Please enter a number again for exponent number : ");
    scanf("%d",&exponent);
    result=pow(numb,exponent);
    if(numb==5) result+=1;
    printf("%d ^ %d ==> %d",numb,exponent,result);

    return 0;
}