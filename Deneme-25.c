#include<stdio.h>

int main(){
    int entry;
    printf("Please enter a number :\n");
    scanf("%d",&entry);

    for(int i=1;i<=10;i++){
        printf("%d * %d ==> %d\n",entry,i,(entry*i));
    }
    
    return 0;
}