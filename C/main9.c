#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/*int sayi;
	printf("Sayiyi Giriniz");
	scanf("%d",&sayi);
	
	if(sayi%2==0)
	{
	
		printf("Sayi Cifttir");	
	}
	else
	{
		printf("Sayi Tektir");
	}
	*/
	
	
	/*int sayi;
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 || sayi%5==0)
	{
		printf("Girdiginiz Sayi 3 ve 5 e bolunur");
		}
	else
	{
		printf("Girdiginiz Sayi 3 ve 5 e bolunmez");
		}
		*/
		
	//Klavyeden girilen dereceye göre suyun durumunu yazdıran program kodlayın
	
	printf("*******Suyun Durumu*******\n\n");
	
	int su;
	
	printf("Sicaklik Degerini Girin:");
	scanf("%d",&su);
	
	if(su<=0)
	{
		printf("Su  Buz Halinde");
	}
	if(su>0 && su<100)
	{
		printf("Su Sıvı Halde");
	}
	if(su>=100)
	{
		printf("Su Gaz Halinde");
	}
	return 0;
}