#include <stdio.h>
#include <stdlib.h>




//while(şart)
//{

//}
int main() {
	/*int i;
	i=1;
	while(i<=5)
	{
		printf("Yalniz Kurtsun\n");
		i++;	
	}	
	*/
	
// bir ile 10 arasındaki sayıları while döngüsü ile listeleyin c kodlarını kullanın
	
	/*int i=1;
	while(i<10)
	{
		printf("%d\n",i);
		i++;
	}
	*/
	
	int sayi,faktoriyel;
	faktoriyel=1;
	sayi=5;
	
	while(sayi>1)
	{
		faktoriyel=faktoriyel*sayi;
		sayi--;
	}
	printf("Sonuc: %d",faktoriyel);
	
	
	
	
	
	
	return 0;
}