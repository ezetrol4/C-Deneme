#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//float değişkenler
	
	//%f
	
	/*float sayi;
	sayi=5;
	printf("%f",sayi);
	*/
	
	/*float sayi1,sayi2,bolum;
	
	sayi1=7;
	sayi2=4;
	bolum=sayi1/sayi2;
	
	printf("%f",bolum);
	*/
	
	/*float deg1,deg2,toplam;
	deg1=5.85;
	deg2=4.37;
	toplam=deg1+deg2;
	printf("Toplam: %f",toplam);
	*/
	
	/*float sinav1,sinav2,sinav3,ort;
	
	sinav1=75;
	sinav2=80;
	sinav3=81;
	
	ort=(sinav1+sinav2+sinav3)/3;
	printf("Ortalama: %f",ort);
	*/
	
	
	printf("Ideal Kilo Hesaplama");
	printf("\n");
	// ideal kilo hesabı
	// (boy - 100 + yaş/10)*0,8 -----> kadınlar için   0,9 ---------> erkekler için
	
	float boy,yas,ideal;
	boy=165;
	yas=24;
	ideal=(boy-100+yas/10)*0.8;
	printf("Ideal Kilonuz: %f",ideal);
	
	
	
	
	return 0;
}