#include <stdio.h>
#include <stdlib.h>

// Fibonacci serisinin ilk on elemanını listeleyen kodu yazınız
int main() 
{
	int a,b,c,i;
	a=1;
	b=1;
	
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=1;i<=10;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}