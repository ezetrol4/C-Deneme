#include <windows.h>

int main(){
	int i,ucakNo, ondaBir;
	int yolcuSayisi;
	int faktoryel;
	printf("Uçak Numarasını Giriniz: ");
	scanf("%d", &ucakNo);
	ondaBir = ucakNo/10;
	
	if(ondaBir==0)
		faktoryel=1;
	
	else
		for(i=ondaBir;i>0;i--)
		faktoryel *=i;
		yolcuSayisi = 5*faktoryel;
	printf("Yolcu sayisi=%d",yolcuSayisi);	
	return=0
}
