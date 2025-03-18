#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char cewap;
	printf("Toplama islemi yapmak ister misiniz?(y/n)\n");
	scanf("%s",&cewap);
	if(cewap =='y'){
		int toplam,id1,id2,i;

	printf("Lutfen toplamak istediginiz 2 sayiyi giriniz : \n");
	printf("Birinci sayi : \t");
	scanf("%d",&id1);
	printf("Ikinci sayi : \t");
	scanf("%d",&id2);
	toplam=id1+id2;
	printf("Sayilarin toplami : %d",toplam);
	}
	else {//Toplama sonu
	}
	
	
	printf("\nSemsiye alip almama durum kontrolu yapmak ister misin? (y/n)\n");
	scanf("%s",&cewap);
	if(cewap =='y'){
		char cuwap;
		printf("Dun hava durumunu kontrol ettin mi?(e/h)\n");
		scanf("%s",&cuwap);
		if(cuwap=='e'){
			printf("Bugun hava yagmurlu mu?(e/h)\n");
			scanf("%s",&cuwap);
			if(cuwap=='e') printf("Semsiye almalisin.\n");
			else printf("Semsiye almana gerek yok.\n");
		}
		else{
			printf("Hava durumuna bakmamissin. Buyuk hata. Peki disarida hava kapali mi acik mi? (k/a)");
			scanf("%s",&cuwap);
			if(cuwap=='k'){
				printf("Semsiyeyi tedbiren alsan iyi olur.");
			}
			else printf("Semsiye almana gerenk yok.");
		}
		
	}
	else {//Semsiye kontrolu sonu
	}
	
	
	printf("Kar-Zarar hesabi yapmak ister misin? (y/n)\n");
	scanf("%s",&cewap);
	if(cewap =='y'){
		int alim,satim,Sonuc,yuzde;
		printf("Urunun alis fiyatini giriniz: \n");
		scanf("%d",&alim);
		printf("Urunun satis fiyatini giriniz : \n");
		scanf("%d",&satim);
		
		if(alim<satim){
			Sonuc=satim-alim;
			yuzde=(100*Sonuc)/satim;
			printf("Her halikarda karlisiniz. %d lirada %d kariniz var. Bundan da yuzde %d karlisiniz.",alim,Sonuc,yuzde);
		}
		else if(alim>satim){
			Sonuc=alim-satim;
			yuzde=(100*Sonuc)/alim;
			printf("Her halikarda zarardasiniz. %d lirada %d zarariniz var. Bundan da yuzde %d zarardasiniz.",alim,Sonuc,yuzde);
		}
		else printf("Hatali girdi.");
		
	}
	else {//Kar-Zarar Bitisi
{
    int id1,id2,id3;
    printf("Bir sayi girdisi giriniz...\n");
    scanf("%d %d %d",&id1,&id2,&id3);
    if(id1>id2 && id1>id3 && id2>id3){
        printf("Girdiginiz en buyuk deger %d\n",id1);
        printf("Siralamasi : %d>%d>%d",id1,id2,id3);
    }
    else if(id2>id1 && id2>id3 && id3>id1){
        printf("Girdiginiz en buyuk deger %d\n",id2);
        printf("Siralamasi : %d>%d>%d",id2,id3,id1);
    }
    else if(id2>id1 && id2>id3 && id1>id3){
        printf("Girdiginiz en buyuk deger %d\n",id2);
        printf("Siralamasi : %d>%d>%d",id2,id1,id3);
    }
    else {
        printf("Girdiginiz en buyuk deger %d\n",id3);
        printf("Siralamasi : %d>%d>%d",id3,id2,id1);
    }
    
}
	}
		
	
	
	
	
	
	return 0;
}

