#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Serta� K�z�lel 1220505029
int main(int argc, char *argv[]) {	
	int i,sayi;
	long int minimum=9999999999;
	int dizi[5];
	printf("5 adet sayi giriniz 10 basamaktan fazla sayi girmeyiniz!!!!\n");
	for(i=0;i<=4;i++)
	{
		printf("%d.sayiyi  giriniz \n",i+1);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<5;i++)
	{
		if(dizi[i]<minimum)
		{
			minimum=dizi[i];
		}
	}
	printf("En kucuk sayi %d'dir.",minimum);
		/*T(N)=7,8,9,10.sat�rlarda birer maliyet var  11.sat�rdaki for d�ng�s�nde 12 maliyet var
		13 ve 14.sat�rda 5 er maliyet var 16.sat�rda 12 maliyet var 18.sat�rda 5 maliyet var
		20.sat�rda 5 maliyet var 23.sat�rda 1 maliyet var toplamda 49 maliyet var
		T(4)=49 */
		

	

	return 0;
}
