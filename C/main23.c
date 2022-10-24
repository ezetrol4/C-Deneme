#include <stdio.h>
#include <stdlib.h>

int main() {
	/*int en,boy,i,j;
	printf("En Degerini Giriniz: ");
	scanf("%d",&en);
	
	printf("Boy Degerini Giriniz: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
	
	int i,j,taban;
	printf("Taban Degerini Girin: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
	
	
	
	
	
	
	
	return 0;
}