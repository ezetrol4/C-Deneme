#include <stdio.h>
#include <stdlib.h>

int main() {
	/*char kaynak[30]="Merhaba Balikesir";
	char kopya[30]="";
	
	strcpy(kopya,kaynak);
	printf("%s",kopya);
	*/
	
	char nereden[30]="Merhaba Guzel Sehrimiz Ankara";
	char nereye[30]="";
	
	strncpy(nereye,nereden,9);
	printf("%s",nereye);
	
	
	
	
	
	
	
	
	
	return 0;
}