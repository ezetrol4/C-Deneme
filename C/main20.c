#include <stdio.h>
#include <stdlib.h>

int main() {
	/*char sehir[15];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Sehri Girin: ");
		scanf("%s",&sehir);
		printf("Girdiginiz Sehir : %s",sehir);
		printf("\n");		
	}
	*/
	int dizi[100];
	int i,sayi;
	
	printf("Eleman Sayisi: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d.degerini girin: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	
	
	return 0;
}