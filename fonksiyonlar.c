#include<stdio.h>

void toplama(int id1,int id2){
    int toplam;
    toplam = id1+id2;
    printf("Girilen sayilarin toplami --> %d",toplam);
}


int main(){
    
    //toplama islemini fonksiyonlar ile yapma
    int id1,id2;
    printf("Lutfen toplamak istediginiz degerleri yaziniz : \n");
    scanf("%d %d",&id1,&id2);
    toplama(id1,id2);

    return 0;
}