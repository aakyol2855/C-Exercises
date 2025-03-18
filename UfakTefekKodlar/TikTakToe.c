#include <stdio.h> //Abdulvahab Akyol 
int main()
{
 int l = 0,i,k; //Burada Asagida kullanacagim atamalari yapiyorum.
 int tablo1[3] = { '_','_','_' };
 int tablo2[3] = { '_','_','_' };
 int tablo3[3] = { '_','_','_' };
 int plyr1, plyr2;
 char id1[20],id2[20];
 int KazananSay[2]={0,0};
 int saydirma=1;

 printf("Arayuze hosgeldiniz. Lutfen Playerlarin adlarini giriniz.");//Bir arayuz ve kullanici isimlerini almak icin:
 printf("\nPlayer1 : ");
 scanf("%s",&id1);
 printf("\nPlayer2 : ");
 scanf("%s",&id2);


 printf("Oyunumuza Hosgeldiniz.\n");//Oyuna giris ekrani
 for ( i = 0; i < 3; i++) { //Burada eilk bastaki tabloyu olusturuyorum.
 printf("%c\t", tablo1[i]);
 }
 printf("\n");
 for ( i = 0; i < 3; i++) {
 printf("%c\t", tablo2[i]);
 }
 printf("\n");
 for ( i = 0; i < 3; i++) {
 printf("%c\t", tablo3[i]);
 }

 for(i=0;i<3;i++){ //Burada oyunun 3 kere calismasini sagliyorum.

 int tablo1[3] = {'_','_','_'}; //Ust for dongusu icerisinde tekrar arraylarimi atiyorum ki oyun 2. basladiginda eski oyunun verileri

 int tablo2[3] = { '_','_','_' };
 int tablo3[3] = { '_','_','_' };
 printf("\n%d.ci tur. Kolay Gelsin",saydirma++);
 printf("\n%s : %d , %s : %d",id1,KazananSay[0],id2,KazananSay[1]);//Skor bilgisini yazdiriyorum.
 for (l = 0; l < 4; l++) //Ýkinci for dongusunu oyunun 9 kere tekrarlanarak oyunun bitmesini saglar.
 {

 printf("\n%s Hamlenizi yapiniz :",id1); //1.Oyuncunun hamlesini aldigim yer
 scanf("%d", &plyr1);
 if (plyr1 > 0 && plyr1 <= 3) {
 tablo1[plyr1 - 1] = 'X';
 }
 else if (plyr1 > 3 && plyr1 <= 6) {
 tablo2[plyr1 - 4] = 'X';
 }
 else if (plyr1 > 6 && plyr1 <= 9) {
 tablo3[plyr1 - 7] = 'X';
 }
 else printf("Hatali girdi!");
 for ( i = 0; i < 3; i++) { //tablo cizdirme
 printf("%c\t", tablo1[i]);
 }
 printf("\n");
 for ( i = 0; i < 3; i++) {
 printf("%c\t", tablo2[i]);
 }
 printf("\n");
 for ( i = 0; i < 3; i++) {
 printf("%c\t", tablo3[i]);
 }


 printf("\n%s Hamlenizi yapiniz :",id2); //2.Oyunucunun hamlesini aldigim yer
 scanf("%d", &plyr2);
 if (plyr2 > 0 && plyr2 <= 3) {
 tablo1[plyr2 - 1] = 'O';
 }
 else if (plyr2 > 3 && plyr2 <= 6) {
 tablo2[plyr2 - 4] = 'O';
 }
 else if (plyr2 > 6 && plyr2 <= 9) {
 tablo3[plyr2 - 7] = 'O';
 }
 else printf("Hatali girdi!");
 for ( i = 0; i < 3; i++) { //Tablo cizdirme
 printf("%c\t", tablo1[i]);
 }
 printf("\n");
 for ( i = 0; i < 3; i++) {
 printf("%c\t", tablo2[i]);
 }
 printf("\n");
 for ( i = 0; i < 3; i++) {
 printf("%c\t", tablo3[i]);





 if(tablo1[0]=='X'&&tablo1[1]=='X'&&tablo1[2]=='X')//Player1 icin kazanma ihtimalleri kontrolu
 {printf("\n%s kazandi",id1);
 k=1;
 break;
 }
 else if(tablo2[0]=='X'&&tablo2[1]=='X'&&tablo2[2]=='X'){
 printf("\n%s kazandi",id1);
 k=1;
 break;
 }
 else if(tablo3[0]=='X'&&tablo3[1]=='X'&&tablo3[2]=='X')
 {printf("\n%s kazandi",id1);
 k=1;
 break;
 }
 else if(tablo1[0]=='X'&&tablo2[1]=='X'&&tablo3[2]=='X')
 {printf("\n%s kazandi",id1);
 k=1;
 break;
 }
 else if(tablo3[0]=='X'&&tablo2[1]=='X'&&tablo1[2]=='X')
 {printf("\n%s kazandi",id1);
 k=1;
 break;
 }
 else if(tablo1[0]=='X'&&tablo3[0]=='X'&&tablo2[0]=='X')
 {printf("\n%s kazandi",id1);
 k=1;
 break;
 }
 else if(tablo1[1]=='X'&&tablo3[1]=='X'&&tablo2[1]=='X')
 {printf("\n%s kazandi",id1);
 k=1;
 break;
 }
 else if(tablo1[2]=='X'&&tablo3[2]=='X'&&tablo2[2]=='X')
 {printf("\n%s kazandi",id1);
 k=1;
 break;
 }
 if(k==1) KazananSay[0]+=1;


 if(tablo1[0]=='O'&&tablo1[1]=='O'&&tablo1[2]=='O') //Player2 icin kazanma ihtimalleri kontrolu
 {printf("\n%s kazandi",id2);
 k=0;
 break;
 }
 else if(tablo2[0]=='O'&&tablo2[1]=='O'&&tablo2[2]=='O')
 {printf("\n%s kazandi",id2);
 k=0;
 break;
 }
 else if(tablo3[0]=='O'&&tablo3[1]=='O'&&tablo3[2]=='O')
 {printf("\n%s kazandi",id2);
 k=0;
 break;
 }
 else if(tablo1[0]=='O'&&tablo2[1]=='O'&&tablo3[2]=='O')
 {printf("\n%s kazandi",id2);
 k=0;
 break;
 }
 else if(tablo3[0]=='O'&&tablo2[1]=='O'&&tablo1[2]=='O')
 {printf("\n%s kazandi",id2);
 k=0;
 break;
 }
 else if(tablo1[0]=='O'&&tablo3[0]=='O'&&tablo2[0]=='O')
 {printf("\n%s kazandi",id2);
 k=0;
 break;
 }
 else if(tablo1[1]=='O'&&tablo3[1]=='O'&&tablo2[1]=='O')
 {printf("\n%s kazandi",id2);
 k=0;
 break;
 }
 else if(tablo1[2]=='O'&&tablo3[2]=='O'&&tablo2[2]=='O')
 {printf("\n%s kazandi",id2);
 k=0;
 break;
 }
 if(k==0) KazananSay[1]+=1;

 }
 }
 }
 printf("Oyunumuz bitmistir. Tesekkur ederiz.");
 return 0;
}

