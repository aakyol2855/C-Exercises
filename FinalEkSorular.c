#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Abdulvahab Akyol 210303055
int *sum( int *a,int *b)
{ 
    fflush(stdout);
    perror("gecti");
    int *sonuc=malloc(sizeof(int));
    *sonuc = *a+*b;
    return sonuc;
}

int main(){
    int id1,id2;
    printf("Lutfen toplamak istediginiz iki degeri girin : ");
    scanf("%d %d",&id1,&id2);
    int *sonucp=sum(&id1,&id2);
    printf("Sayilarin toplaminin sonucu => %d",*sonucp);
    free(sonucp);
    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Abdulvahab Akyol 210303055
void sumf(int *id1, int *id2, int *sum){
    *sum = *id1 + *id2;
}


int main(){
    int* id1=(int *)malloc(sizeof(*id1));
    int* id2=(int *)malloc(sizeof(*id2));
    int* sum=(int *)malloc(sizeof(*sum));
    printf("Toplamak istediginiz iki sayi giriniz : ");
    scanf("%d %d",id1,id2);
    sumf(id1,id2,sum);
    printf("Sayilarin toplami => %d",*sum);

    free(id1);
    free(id2);
    free(sum);
    return 0;
} */
