#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi=20;
	int *s=&sayi;
	
	//Sayiyi Ekrana Yazdırma
	printf("Deger: %d\n",sayi);
	
	//Adresi Ekrana Yazdırma
	
	printf("Adres: %x\n",s);	
	
	char harf='a';
	char *h=&harf;
	printf("\n\n-------------\n\n");
	//Harfi ekrana yazdırma 
	
	printf("Harf: %c\n",harf);
	printf("Adres: %x",h);
	return 0;
}