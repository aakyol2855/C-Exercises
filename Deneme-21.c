#include<stdio.h>

int main(){

    int childs; //kodda if else değil switch case kullanmayı denemek lazım!
    char maritalstat;
    printf("Are you married or single?(m/s)");
    scanf("%c",&maritalstat);
    if(maritalstat == 'm'){
        printf("So you are married. Wonderfull!\n");
        printf("How many children do you have?  ");
        scanf("%d",&childs);
        if(childs<3) printf("You have a little beatiful family. Lucky guy ;)");
        else if(childs>=3) printf("What a big and wonderfull family.");
        else printf("Somethings went wrong");
    }
    else if(maritalstat == 's') printf("Hey handsome guy! Shell we drink somethings to night?");
    else printf("Something happened wrongly");

    return 0;
}