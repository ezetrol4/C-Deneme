#include <stdio.h>
#include <stdlib.h>


int main() {
	char kitapadi[20]="Avcumuzda ki Kelebek";
	char yazar[30]="Ahmet Serif izgoren";
	char turu[10]="Hikaye";
	char sayfa[3]="124";
	char basimyili[4]="2001";
	
	printf("************** Kitap Tanitim *************\n");
	printf("Kitapadi: %s - KitapYazar: %s\n",kitapadi,yazar);
	printf("Turu: %s\n",turu);
	printf("Sayfa Sayisi: %s\n",sayfa);
	printf("Basimyili: %s\n",basimyili);
	return 0;
}