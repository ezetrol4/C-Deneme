#include <stdio.h>
#include <stdlib.h>


int main() {
	printf("********************");
	printf("\n");
	printf("**      MENU      **");
	printf("\n");
	printf("********************");
	printf("\n\n");
	printf("1.Toplama Islemi\n");
	printf("2.Carpma Islemi\n");
	printf("3.Kare Bul\n");
	printf("4.Kup Bul\n");
	printf("5.Denklem (5x^2+4x+3)");
	
	
	int s1,s2,sonuc,secim;
	printf("\n\n");
	printf("Isleminiz: ");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			printf("Iki Sayi Girin: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1+s2;
			printf("Toplam: %d",sonuc);
		break;
	
		case 2:
			printf("Iki Sayi Girin: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1*s2;
			printf("Carpim: %d",sonuc);
		break;
		
		case 3:
			printf("Karesi Alinacak Sayi: ");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("Sonuc: %d",sonuc);
		break;
		
		case 4:
			printf("Kupu Alinacak Sayi: ");
			scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("Sonuc: %d",sonuc);
		break;
		
		case 5:
			printf("x degerini girin: ");
			scanf("%d",&s1);
			sonuc=5*s1*s1+4*s1+3;
			printf("Denklem Sonucu: %d",sonuc);
		break;
	}
	
	
	
	
	
	
	return 0;
}