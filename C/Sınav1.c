#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int s=1,n=3,k;
	do{
		for(k=1;k<=n;k++)
			printf("%d", k*s);
		printf("\n");
		s++;
	} while(s<=n);
	
	return 0;
}