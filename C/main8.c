#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/*int sayi=5;
	
	if (sayi==5){
		
		printf("Girilen Deger Dogru");
	}
	else
	{
		printf("Girilen Deger Yanlis");
		
	}
	*/
	
	
	/*int sayi1,sayi2,toplam;
	
	sayi1=24;
	sayi2=28;
	
	toplam=sayi1+sayi2;
	
	if(toplam>=50)
	{
		
		printf("Toplam Degeriniz: %d - 50den Buyuk",toplam);					
	}	
	else{
		printf("Toplam Degeriniz: %d -50den Kucuk",toplam);		
	}
	*/
	
	printf("Ogrenci Ortalama Hesap Bilgi Sistemi...");
	printf("\n\n"); 
	
	int s1,s2,ort;
	
	printf("Sinav1 Degerini Girin: ");
	scanf("%d",&s1);
	
	printf("Sinav2 Degerini Girin: ");
	scanf("%d",&s2);
	
	ort=(s1+s2)/2;

	printf("Ogrencinin Ortalamasi : %d",ort);
	
    if(ort>=50)
	{
		printf("   Tebrikler Gectiniz :)");
		}
	else
	{
		printf("Malesef Kaldiniz :(");	
		}	
	return 0;
}