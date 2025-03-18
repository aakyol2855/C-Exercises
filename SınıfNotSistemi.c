#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#define ogrsayisi 5

//return sqrt(standartsapma/ogrsayisi);
//pow(basarinotu[i]-ortalama,2);

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
		standartsapma+=pow(basarinotu[i]-ortalama,2);
	}
	return sqrt(standartsapma/ogrsayisi);
	
}
int EnYuksekNot(int basarinotu[])
{
	int i,enyukseknot;
	enyukseknot=basarinotu[0];

    for(i=0;i<ogrsayisi;i++)
    {
    	if(enyukseknot<basarinotu[i])
    	{
       		enyukseknot=basarinotu[i];
		}
       	
	}
	
  return enyukseknot;
}
int EnDusukNot(int basarinotu[])
{
	int i,endusuknot;
	endusuknot=basarinotu[0];
	for(i=0;i<ogrsayisi;i++)
    {
    	if(endusuknot>basarinotu[i])
    	{
       		endusuknot=basarinotu[i];
		}  	
	}
	return endusuknot;
}

void MenuYaz()
{
	setlocale(LC_ALL, "Turkish");
	printf("\n-- -- -- --> Men� <-- -- -- --\n\n");
	printf("1-Kay�t Ekle\n");
	printf("2-Kay�tlar� Listele\n");
	printf("3-S�n�f ba�ar� notlar�n� listele\n");
	printf("4-Kay�tlar� ba�ar� notuna g�re s�rala\n");
	printf("5-�statistiki bilgiler\n");
	printf("6-��k��\n");

}
float SinifOrtalamasi(int vize1[],int vize2[],int final[],int basarinotu[],int satir)
{
	setlocale(LC_ALL, "Turkish");
	float sum=0.0,sinifort;
	int i;
	
	for(i=0;i<ogrsayisi;i++)
	{
		basarinotu[i]=(float)vize1[i]*0.2+(float)vize2[i]*0.3+(float)final[i]*0.5;
		sum=sum+basarinotu[i];
	}	
	sinifort=sum/ogrsayisi;
	return sinifort;
	

}

int main()
{
	setlocale(LC_ALL, "Turkish");
	char harfnotlari[ogrsayisi][2],durum[ogrsayisi][25],At[3][15]={"GECT�","KALD�","SARTL� GECT�"};
	char harfnotlari1[9][2]={"AA","BA","BB","CB","CC","DC","DD","FD","FF"},yuzde[1]={"%"};
	int secim,ortustu,count=0,basariorani1;
	int secenek=1;
	int i,j,gecicibellek;
	int vize1[ogrsayisi];
	int vize2[ogrsayisi];
	int final[ogrsayisi];
	int basarinotu[ogrsayisi];
	char ogradi[ogrsayisi][20];     
	char ogrsoyadi[ogrsayisi][20];
	double basariorani,id1;
	
    while(secim!=6)
   {
		MenuYaz();
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
    		
				if(secim==secenek)
				{
					printf("\n---Kay�t Ekle---\n");
					for(i=0;i<ogrsayisi;i++)
				{
					printf("Ogrenci %d -->\n",i+1);
					printf("Ad� :");   scanf("%s",&ogradi[i]);
					printf("Soyad� :");   scanf("%s",&ogrsoyadi[i]);
					printf("1.Ara S�nav, 2.Ara S�nav, Final :");    scanf("%d %d %d",&vize1[i],&vize2[i],&final[i]);
				}
				printf("%-10s     %s    %-10s  %-10s  %-6s\n","Ad","Soyad","Vize1","Vize2","Final");
				for(i=0;i<ogrsayisi;i++)
				{
					printf("%-10s     %.1s.       %-10d  %-10d  %-6d\n",ogradi[i],ogrsoyadi[i],vize1[i],vize2[i],final[i]);    
				}
				printf("S�n�f mevcudu dolu!\n"); 
				secenek++;
				}
				else
				{
					printf("L�tfen ilk �nce ��renci kaydediniz");
				}
				break;
			case 2:
				if(secim==secenek)
				{
				printf("\n\n---Kay�tlar� Listele---\n");
	
				for(i=0;i<ogrsayisi;i++)
				{
					basarinotu[i]=(float)vize1[i]*0.2+(float)vize2[i]*0.3+(float)final[i]*0.5;
				}	
				
			
    			printf("%-10s	%s	%-10s	%-10s	%-6s	%s	%s	%s\n","Ad","Soyad","Vize1","Vize2","Final","Notu","Harf","Durumu");
				for(i=0;i<ogrsayisi;i++)
				{
					if(basarinotu[i]>=90 && basarinotu[i]<=100)
					{
					  harfnotlari[i][0]=harfnotlari1[0][0];
					  harfnotlari[i][1]=harfnotlari1[0][1];
					  strcpy(durum[i],At[0]);
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
					printf("L�tfen ilk �nce ��renci kaydediniz!\n");
				}
			    break;
			
			case 3: 
				printf("\n\n---- S�n�f�n Ba�ar� Notlar� ---\n");
				if(secim==secenek)
				{
				printf("%-10s	%s	%-10s\n","Ad","Soyad","Notu");
				for(i=0;i<ogrsayisi;i++)
				{
					printf("%-10s	%.1s.	%-10d\n",ogradi[i],ogrsoyadi[i],basarinotu[i]);    
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
				printf("\n\n--- �statistiki bilgiler ---\n");
				ortustu=SinifOrtalamasi(vize1,vize2,final,basarinotu,ogrsayisi);
				for(i=0;i<ogrsayisi;i++)
				{
					if(basarinotu[i]>=ortustu) count=count+1;    
				}
				id1=count;
				basariorani = (id1/ogrsayisi)*100;
				basariorani1=basariorani;
				
				printf("En Y�ksek Not : %d\n",EnYuksekNot(basarinotu)); 
				printf("En D���k Not : %d\n",EnDusukNot(basarinotu));
    			printf("S�n�f Ortalamas� : %.0f\n",SinifOrtalamasi(vize1,vize2,final,basarinotu,ogrsayisi));  
    			printf("Ortalama �st� ki�i say�s�  %d  -  Ba�ar� Oran� : %.1s %d \n",count,yuzde,basariorani1);
    			printf("Standart Sapma : %.2f\n",StandartSapma(basarinotu));
				break;
				case 6: break;
				printf("Hatal� bir se�im yapt�n�z!\n "); break;
		}
	}
}
