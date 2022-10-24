#include <stdio.h>
#include <stdlib.h>

void dortgen(int kisa,int uzun)
{
	int i,j;
	for(i=0;i<uzun;i++)
	{
		for(j=0;j<kisa;j++)
		{
			printf("*");
		}
		printf("\n");
	}

}



/*int kupbul(int sayi)
{
	int sonuc=sayi*sayi*sayi;
	return sonuc;
}*/
int main() {
	/*int s;
	printf("Sayiyi Girin: ");	
	scanf("%d",&s);
	kupbul(s);
	printf("\n\nSonuc: %d",kupbul(s));
	*/
	
	dortgen(4,10);
	return 0;
}