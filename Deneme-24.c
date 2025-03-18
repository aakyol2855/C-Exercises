#include<stdio.h>

int main(){
    system("color 04");
    int dogalsay[50],Teksay[50],Ciftsay[50],boyutlar;
    for(int i=1;i<=50;i++){
        if(i%2==0){
            Ciftsay[i-1]=i;
        }
        else Teksay[i-1]=i;
    }
    boyutlar=sizeof(Teksay)/sizeof(int);
    printf("Cift Sayilar ;\n");
    for(int i=0;i<50;i++){
        if(Ciftsay[i]!=0 && Ciftsay[i]>0 && Ciftsay[i]<51) printf("%d ",Ciftsay[i]);
    }

    printf("\nTek Sayilar;\n");
    for(int i=0;i<boyutlar;i++){
        if(Teksay[i]!=0 && Teksay[i]>0 && Teksay[i]<51) printf("%d ",Teksay[i]);
    }
    return 0;
}