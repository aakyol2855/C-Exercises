#include<stdio.h>
#include<string.h>

//structlar ders1
struct kitapbilgi
{
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;	
	
};


int main(){
	int i;
	
	struct kitapbilgi kb={"katre-iMatem","IskederPala",50,7.7 };
	printf("Kitap ad => %s \n kitap yazar => %s \n",kb.kitapad,kb.yazar);
	printf("Fiyat bilgisi => %d\nkitap puani => %.1f",kb.fiyat,kb.puan);
	
	return 0;
}
