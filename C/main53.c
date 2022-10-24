#include <stdio.h>
#include <stdlib.h>
#define puan 2.19
#define puan2 3.47

int main() {
	int Turkce,Matematik;
	printf("Turkce Netiniz: ");
	scanf("%d",&Turkce);
	
	printf("Matematik Netinizi Giriniz: ");
	scanf("%d",&Matematik);
	
	float Sozelpuan,Sayisalpuan;
	
	Sozelpuan=Turkce*puan+Matematik*puan2+50.25;
	
	Sayisalpuan=Turkce*puan+Matematik*puan2+51.45;

	printf("Toplam Puaniniz: %5.2f \n",Sozelpuan);
	printf("Toplam Sayisal Puaniniz: %5.2f",Sayisalpuan);
	
	
	
	
	return 0;
}