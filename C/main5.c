#include <stdio.h>
#include <stdlib.h>



int main() {
	
/*	int sayi1,sayi2,toplam,fark,carpim;
	printf("Birinci Sayiyi Gririniz: ");
	scanf("%d",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	
	
	
	printf("Toplam: %d\n",toplam);
	printf("Fark: %d\n",fark);
	printf("Carpim: %d\n",carpim);
	*/
	
	/*
	int kenar,alan,cevre;
	
	printf("Karede Alan Ve Cevre Hesabi\n\n");
	
	printf("Bir Kenari Girin ");
	
	scanf("%d",&kenar);
	
	alan=kenar*kenar;
	
	cevre=kenar*4;
	
	printf("Karenin Alani :%d\n",alan);
	printf("Karenin Cevresi: %d",cevre);
	*/
	
	/*int s1,s2,s3,ortalama;
	
	printf("Birinci Sinav: ");
	scanf("%d",&s1);
	
	printf("Ikinci Sinav :");
	scanf("%d",&s2);
	
	printf("Ucuncu Sinav :");
	scanf("%d",&s3);
	
	ortalama=(s1+s2+s3)/3;
	
	printf("Ortalamaniz :%d",ortalama);
	*/
	
	int misir,kola,su,bilet,toplam;
	
	printf("Misir Adeti:");
	scanf("%d",&misir);
	
	printf("Kola Adeti: ");
	scanf("%d",&kola);
	
	printf("Su Adeti: ");
	scanf("%d",&su);
	
	printf("Bilet Adeti: ");
	scanf("%d",&bilet);
	
	toplam=misir*2+kola*2+su*1+bilet*8;
	
	printf("Toplam Borcunuz: %d",toplam);
	printf(" TL...");
	
	
	
	return 0;
}