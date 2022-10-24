#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/*int sayac=0;
	int i;
	for(i=1;i<=10;i++)
	{
		sayac=sayac+i;
	}
	printf("Sayac: %d",sayac);
	
	*/
	
	/*int i;
	int faktor=1;
	for(i=1;i<=5;i++)
	{
		faktor=faktor*i;
	}
	printf("5 Sayisinin Faktoriyel Degeri: %d",faktor);
	*/
	
	
	
	int i,sayi;
	int faktoriyel=1;
	
	printf("Faktoriyeli Alinacak Sayi: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("Sonucunuz: %d",faktoriyel);
	
	return 0;
}