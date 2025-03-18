#include<stdio.h>

int main(){
   
    int angle1,angle2,angle3,totalangle;
    printf("We gonna try to determinate which type of triangle that you enter angle value of you entered.\n");
    printf("Please enter 3 angle of the triangle\n");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    totalangle=angle1+angle2+angle3;
    if(totalangle>180) printf("Wrong angle values entered!");
    if(angle1<90&&angle2<90&&angle3<90) printf("Your tringle is a acute triangle(dar acili)");
    else if(angle1>90||angle2>90||angle3>90) printf("Your triangle is a obtuse triangle (genis acili)");
    else printf("our triangle is a right angle triangle(Dik acili)");
    
    return 0;
}