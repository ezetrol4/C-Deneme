#include <stdio.h>
#include <stdlib.h>



int main() {
	
	/*float sayi1,sayi2,toplam;
	printf("ilk sayiyi girin:");
	scanf("%f",&sayi1);
	
	printf("ikinci sayiyi girin:");
	scanf("%f",&sayi2);
	
	toplam=sayi1+sayi2;
	
	printf("Toplama sonucu: %f",toplam);
	*/
	
	/*float a,b,c;
	printf("Birinci sayi");
	scanf("%f",&a);
	printf("Ikinci sayi");
	scanf("%f",&b);
	
	c=a+b;
	printf("sonuc: %f",c);
	*/
	
	//Aylık 2500 tl maaş alan kişinin maaşına %12 zam yapılırsa yeni maaşı ne kadar olur.
	
	/*printf("****Zam maas hesabi****");
	printf("\n\n");
	float maas,yenimaas;
	
	printf("Maasinizi Giriniz: ");
	scanf("%f",&maas);
	
	yenimaas=maas+maas*12/100;
	
	printf("Yeni Maasiniz: %f",yenimaas);
	*/
	
	//Çemberde alan : pi * r *r 
	//Çemberde çevre: 2*pi*r	
	
	
	/*printf("Cemberde alan ve cevre hesabi\n");
	printf("*******************************\n");
	
	float yaricap,pi,alan,cevre;
	
	pi=3.14;
	
	printf("Yaricap Degeri:");
	scanf("%f",&yaricap);
	
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	
	printf("Alan: %f",alan);
	printf("Cevre: %f",cevre);
	*/
	
	//ygs 1 Puan Türü hesaplama
	
	//Türkçe= 1.999
	//Matematik= 3.998
	//Sosyal Bilgiler=1
	//Fen Bilgisi=2.999
	//Taban= 100.160
	
	
	float turkce,matematik,sosyal,fen,taban,sonuc;
	
	taban=100.160;
	
	printf("Turkce Netiniz Giriniz:");
	scanf("%f",&turkce);
	
	printf("Matematik Netiniz Giriniz:");
	scanf("%f",&matematik);
	
	printf("Sosyal Netiniz Giriniz:");
	scanf("%f",&sosyal);
	
	printf("Fen Netinizi Giriniz:");
	scanf("%f",&fen);
	
	sonuc=turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
	
	printf("Ygs - 1 Puan Turundeki Sonucunuz: %f",sonuc);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}