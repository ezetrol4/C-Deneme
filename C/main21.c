#include <stdio.h>
#include <stdlib.h>

int main() {
	/*int i;
	for(i=1;i<=5;i++)
	{
		printf("*****\n");	
	}
	*/
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");				
	}
	
	
	
	
	
	return 0;
}