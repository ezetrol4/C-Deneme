#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// karenin alan ve çevresi 
	// Deger: Bir kenar
	// Alan: Kenar * Kenar
	// Çevre: Kenar * 4
	
	int kenar,alan,cevre;
	kenar=10;
	alan=kenar*kenar;
	cevre=kenar*4;
	printf("Alan: %d\n",alan);
	printf("Cevre: %d",cevre);
	
	
	return 0;
}