#include <stdio.h>
#include <stdlib.h>

int main() {
	int satir,sutun,i,j,k,n;
	
	printf("Satir Sayisini Girin: ");
	scanf("%d",&satir);
	
	printf("Sutun Sayisini Girin: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n Degeriniz [%d][%d]----->",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	for(k=0;k<satir;k++)
	{
		for(n=0;n<sutun;n++)
		{
			printf(" %d ",matris[k][n]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}