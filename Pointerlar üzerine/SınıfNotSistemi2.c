#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#define ogrsayisi 2 //10 deðeri define ile öðrenci sayýsýna atandý

double StandartSapma(int basarinotu[])
{
	double toplam=0.0,ortalama,standartsapma=0.0;
	int i;
	for(i=0;i<ogrsayisi;i++)
	{
		toplam+=basarinotu[i];
	}
	ortalama=toplam/ogrsayisi;
	for(i=0;i<ogrsayisi;i++)
	{
		standartsapma=standartsapma+pow(basarinotu[i]-ortalama,2);
	}
	return sqrt(standartsapma/ogrsayisi-1);
}
int EnYuksekNot(int basarinotu[]) //en yüksek not fonksiyonu açýldý
{
	int i,enyukseknot; 
	enyukseknot=basarinotu[0]; //en yüksek not deðeri dizinin 0. indisine atandý.

    for(i=0;i<ogrsayisi;i++) //i deðeri sýfýrdan öðrenci sayýsýna kadar döndürülüyor.
    {
    	if(enyukseknot<basarinotu[i]) // if döngüsüyle dizi içerisindeki en yüksek eleman bulundu.
    	{
       		enyukseknot=basarinotu[i];
		}
       	
	}
	
  return enyukseknot; //en yüksek eleman deðerine return ile döndürüldü
}
int EnDusukNot(int basarinotu[]) //en düþük not fonksiyonu açýldý
{
	int i,endusuknot;
	endusuknot=basarinotu[0]; //en düþük not deðeri dizinin 0. indisine atandý.
	for(i=0;i<ogrsayisi;i++) //i deðeri sýfýrdan öðrenci sayýsýna kadar döndürülüyor.
    {
    	if(endusuknot>basarinotu[i]) // if döngüsüyle dizi içerisindeki en düþük eleman bulundu.
    	{
       		endusuknot=basarinotu[i];
		}  	
	}
	return endusuknot; //en düþük eleman deðerine return ile döndürüldü
}

void MenuYaz() //menüyaz void fonksiyonu oluþturuldu.
{
	setlocale(LC_ALL, "Turkish");
	printf("Menü\n");
	printf("1-Kayýt Ekle\n");
	printf("2-Kayýtlarý Listele\n");
	printf("3-Sýnýf baþarý notlarýný listele\n");
	printf("4-Kayýtlarý baþarý notuna göre sýrala\n");
	printf("5-Ýstatistiki bilgiler\n");
	printf("6-Çýkýþ\n");

}
float SinifOrtalamasi(int vize1[],int vize2[],int final[],int basarinotu[],int satir) //sýnýf ortalamasý için float deðer dödüren bir fonksiyon oluþturuldu.
{
	setlocale(LC_ALL, "Turkish");
	float sum=0.0,sinifort; //toplam ve sýnýf ortalamasý float deðerleri oluyþturuldu.
	int i;
	
	for(i=0;i<ogrsayisi;i++) //i deðeri sýfýrdan öðrenci sayýsýna kadar döndürülüyor.
	{
		basarinotu[i]=(float)vize1[i]*0.2+(float)vize2[i]*0.3+(float)final[i]*0.5; //vize ve final notlarý ortalamasý baþarý notu dizisine atandý.
		sum=sum+basarinotu[i]; //dizi içerisindeki deðerler sum deðiþkenine atandý
	}	
	sinifort=sum/ogrsayisi; //toplam deðer öðrenci sayýsýna bölünerek sýnýf ortalamasý deðiþkenine atandý.
	return sinifort; 
	

}

int main()
{
	//gerekli deðiþkenler oluþturuldu.
	setlocale(LC_ALL, "Turkish");
	char harfnotlari[ogrsayisi][2],durum[ogrsayisi][25],At[3][15]={"GECTÝ","KALDÝ","SARTLÝ GECTÝ"}; 
	char harfnotlari1[9][2]={"AA","BA","BB","CB","CC","DC","DD","FD","FF"},yuzde[1]={"%"};
	int secim,ortustu,count=0,basariorani1;
	int secenek=1,j,gecicibellek;
	int i;
	int vize1[ogrsayisi];
	int vize2[ogrsayisi];
	int final[ogrsayisi];
	int basarinotu[ogrsayisi];
	char ogradi[ogrsayisi][20];     
	char ogrsoyadi[ogrsayisi][20];
	double basariorani,id1;
	
    while(secim!=6) // menü seçim iþlemi,while döngüsü ile saðlandý.
   {
		MenuYaz(); //fonksiyon ile menü yazdýrýldý.
		scanf("%d",&secim);
		switch(secim) //seçime baðlý menu fonksiyonlarý switch ile yazýldý.
		{
			case 1:
    		
				if(secim==secenek) //program ilk çalýþtýrýldýðýnda case 1 e girmesi için if dögüsü oluþturuldu.
				{
					printf("---Kayýt Ekle---\n");
					for(i=0;i<ogrsayisi;i++)
				{
					printf("Adý :");   scanf("%s",&ogradi[i]); //öðrenciye ait bilgiler for döngüsü ile gerekli dizilere çekildi.
					printf("Soyadý :");   scanf("%s",&ogrsoyadi[i]);
					printf("1.Ara Sýnav, 2.Ara Sýnav, Final :");    scanf("%d %d %d",&vize1[i],&vize2[i],&final[i]);
				}
				printf("%-10s     %s    %-10s  %-10s  %-6s\n","Ad","Soyad","Vize1","Vize2","Final");
				for(i=0;i<ogrsayisi;i++)
				{
					printf("%-10s     %.1s.       %-10d  %-10d  %-6d\n",ogradi[i],ogrsoyadi[i],vize1[i],vize2[i],final[i]);  //öðrenciye ait bilgiler for döngüsü ile yazdýrýldý.
				}
				printf("Sýnýf mevcudu dolu!\n"); 
				secenek++; //seçenek deðiþkeni arttýrýlarak 2. case e girmesi için if dögüsü devam ettirildi.
				}
				else
				{
					printf("Lütfen ilk önce öðrenci kaydediniz"); //uyarý verdirildi.
				}
				break;
			case 2:
				if(secim==secenek)
				{
				printf("---Kayýtlarý Listele---\n");
	
				for(i=0;i<ogrsayisi;i++)
				{
					basarinotu[i]=(float)vize1[i]*0.2+(float)vize2[i]*0.3+(float)final[i]*0.5; //baþarý notlarý tekrardan dizi içine atandý.
				}	
				
			
    			printf("%-10s	%s	%-10s	%-10s	%-6s	%s	%s	%s\n","Ad","Soyad","Vize1","Vize2","Final","Notu","Harf","Durumu");
				for(i=0;i<ogrsayisi;i++)
				{
					if(basarinotu[i]>=90 && basarinotu[i]<=100) //öðrencinin not durumuna göre if else kontrol yapýlarýyla harf notlarý belirlendi.
					{
					  harfnotlari[i][0]=harfnotlari1[0][0];
					  harfnotlari[i][1]=harfnotlari1[0][1];
					  strcpy(durum[i],At[0]); //öðrencinin harf notuna göre geçme kalma durumu belirlendi.
					}
					else if(basarinotu[i]>=85 && basarinotu[i]<=89)
					{
					harfnotlari[i][0]=harfnotlari1[1][0];
					harfnotlari[i][1]=harfnotlari1[1][1];
					strcpy(durum[i],At[0]);
					}
					else if(basarinotu[i]>=80 && basarinotu[i]<=84)
					{
					harfnotlari[i][0]=harfnotlari1[2][0];
					harfnotlari[i][1]=harfnotlari1[2][1];
					strcpy(durum[i],At[0]);
					}
					else if(basarinotu[i]>=75 && basarinotu[i]<=79)
					{
					harfnotlari[i][0]=harfnotlari1[3][0];
					harfnotlari[i][1]=harfnotlari1[3][1];
					strcpy(durum[i],At[0]);
					}
					else if(basarinotu[i]>=70 && basarinotu[i]<=74)
					{
					harfnotlari[i][0]=harfnotlari1[4][0];
					harfnotlari[i][1]=harfnotlari1[4][1];
					strcpy(durum[i],At[0]);
					}
					else if(basarinotu[i]>=65 && basarinotu[i]<=69)
					{
					harfnotlari[i][0]=harfnotlari1[5][0];
					harfnotlari[i][1]=harfnotlari1[5][1];
					strcpy(durum[i],At[0]);
					}
					else if(basarinotu[i]>=60 && basarinotu[i]<=64)
					{
					harfnotlari[i][0]=harfnotlari1[6][0];
					harfnotlari[i][1]=harfnotlari1[6][1];
					strcpy(durum[i],At[0]);
					}
					else if(basarinotu[i]>=50 && basarinotu[i]<=59)
					{
					harfnotlari[i][0]=harfnotlari1[7][0];
					harfnotlari[i][1]=harfnotlari1[7][1];
					strcpy(durum[i],At[2]);
					}
					else
					{
					harfnotlari[i][0]=harfnotlari1[8][0];
					harfnotlari[i][1]=harfnotlari1[8][1];
					strcpy(durum[i],At[1]);
					}
				}
				
  				for(i=0;i<ogrsayisi;i++)
			    {
					printf("%-10s	%.1s.	%-10d	%-10d	%-6d	%d	%.2s	%.15s\n",ogradi[i],ogrsoyadi[i],vize1[i],vize2[i],final[i],basarinotu[i],harfnotlari[i],durum[i]);    
				}
				secenek++;
				}
				else
				{
					printf("Lütfen ilk önce öðrenci kaydediniz!\n");
				}
			    break;
			
			case 3: 
				if(secim==secenek) 
				{
				printf("%-10s	%s	%-10s\n","Ad","Soyad","Notu");
				for(i=0;i<ogrsayisi;i++)
				{
					printf("%-10s	%.1s.	%-10d\n",ogradi[i],ogrsoyadi[i],basarinotu[i]);   //öðrenci adý soyadý ve baþarý notu for döngüsü ile ekrana yazdýrýldý. 
				}
				secenek=2;
				}
				else
				{
				
				}
			
				break;
			
			case 4:
				for(i = 0; i < ogrsayisi; i++)
    			{
        			for(j = i+1; j < ogrsayisi; j++)
        			{
            		if(basarinotu[j] > basarinotu[i])
					{
                	gecicibellek = basarinotu[i];
                	basarinotu[i] = basarinotu[j];
                	basarinotu[j] = gecicibellek;
            		}
        			}
    			}
    			for(i=0;i<ogrsayisi;i++)
				{
					printf("%-10s	%.1s.	%-10d	%-10d	%-6d	%d	%.2s	%.15s\n",ogradi[i],ogrsoyadi[i],vize1[i],vize2[i],final[i],basarinotu[i],harfnotlari[i],durum[i]);    
				} 
				break;
			
			case 5:	
				ortustu=SinifOrtalamasi(vize1,vize2,final,basarinotu,ogrsayisi);
				for(i=0;i<ogrsayisi;i++)
				{
					if(basarinotu[i]>=ortustu) 
					count=count+1;    
				}
				id1=count;
				basariorani = (id1/ogrsayisi)*100;
				basariorani1=basariorani;
				
				printf("En Yüksek Not : %d\n",EnYuksekNot(basarinotu)); //en yüksek not deðerine basarinotu dizisi parametre olarak gönderildi.
				printf("En Düþük Not : %d\n",EnDusukNot(basarinotu)); //en düþük not deðerine basarinotu dizisi parametre olarak gönderildi.
    			printf("Sýnýf Ortalamasý : %.0f\n",SinifOrtalamasi(vize1,vize2,final,basarinotu,ogrsayisi));  //sýnýf ortalamasý fonksiyonuna gerekli deðerler gönderilerek yazdýrýldý.
    			printf("Ortalama üstü kiþi sayýsý  %d-  Baþarý Oraný : %.1s %d \n",count,yuzde,basariorani1);
    			printf("Standart Sapma : %.2f\n",StandartSapma(basarinotu)); //standart sapma fonksiyonuna basarinotu dizisi gönderilerek gerekli çýktý ekrana yazdýrýldý.
				break;
				case 6: break;
				printf("Hatalý bir seçim yaptýnýz!\n "); break;
		}
	}
}
