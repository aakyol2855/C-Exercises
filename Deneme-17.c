#include<stdio.h>

int main(){
    int age;
    printf("Please enter u'r age for determinate which stage of your life you are in ;\n");
    scanf("%d",&age);
        if(age<=4) printf("You'r a baby");
        else if(age>4 && age<=12) printf("You'r a kid");
        else if(age>12 && age<=18) printf("You'r a teenager");
        else if(age>18 && age<=24) printf("You'r a young boi");
        else if(age>24) printf("You'r a big boi right now");
    return 0;

}