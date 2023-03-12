#include <stdio.h>
#include <stdlib.h>
// Sertaç Kýzýlel 1220505029
struct ogrenci
{
	char ad[20];
	char soyad[20];
	char memleket[20];
	char universiteili[20];
	char universite[75];
	char bolum[50];
	long int sinif,numara;
	float ortalama;
}ogr[5];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for(i=0;i<5;i++)
	{
	printf("\n\n%d.Ogrencinin adini giriniz ",i+1);
	scanf("%s",ogr[i].ad);
	printf("%d.Ogrencinin soyadini giriniz ",i+1);
	scanf("%s",ogr[i].soyad);
	printf("%d.ogrencinin memleketini giriniz ",i+1);
	scanf("%s",ogr[i].memleket);
	printf("%d.Ogrencinin universite ilini giriniz ",i+1);
	scanf("%s",ogr[i].universiteili);
	printf("%d.Ogrencinin universite adini giriniz ",i+1);
	scanf("%s",ogr[i].universite);
	printf("%d.Ogrencinin bolumunu giriniz ",i+1);
	scanf("%s",ogr[i].bolum);
	printf("%d.Ogrencinin sinifini giriniz ",i+1);
	scanf("%d",&ogr[i].sinif);
	printf("%d.Ogrencinin numarasini giriniz ",i+1);
	scanf("%d",&ogr[i].numara);
	printf("%d.Ogrencinin ortalamasini giriniz ",i+1);
	scanf("%f",&ogr[i].ortalama);
	}
	
	for(i=0;i<5;i++)
	{
	printf("\n\n\n%d.Ogrencinin adi: %s\n",i+1,ogr[i].ad);
	printf("%d.Ogrencinin soyadi: %s\n",i+1,ogr[i].soyad);
	printf("%d.Ogrencinin memleketi: %s\n",i+1,ogr[i].memleket);
	printf("%d.Ogrencinin universite ili: %s\n",i+1,ogr[i].universiteili);
	printf("%d.Ogrencinin universite adi: %s\n",i+1,ogr[i].universite);
	printf("%d.Ogrencinin bolumu: %s\n",i+1,ogr[i].bolum);
	printf("%d.Ogrencinin sinifi: %d\n",i+1,ogr[i].sinif);
	printf("%d.Ogrencinin numarasi: %d\n",i+1,ogr[i].numara);
	printf("%d.Ogrencinin ortalamasi: %.2f",i+1,ogr[i].ortalama);
	}
	
	



	
	return 0;
}
