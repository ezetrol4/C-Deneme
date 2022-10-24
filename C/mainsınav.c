int main()
{
	int i,j;
	int b[4][4];
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			if(i==j){
				b[i][j]=i+j;}
			elseif(i>j){
				b[i][j]=i;}
			else{
				b[i][j]= j-i;}
			
	for(i = 0; i<4;i++)
		for(j = 0;j<4; j++)
			printf("%3d\n", b[i][j]);
	return 0;		
}
