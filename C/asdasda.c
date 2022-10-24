#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <iostream>
int main() {
    int h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11;
    printf("TC kimlik no'nuzun ilk 9 harfini girin ben size tamamini soyleyeyim\n\n");
    scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &h1, &h2, &h3, &h4, &h5, &h6, &h7, &h8, &h9);
    h10 = (7 * (h1 + h3 + h5 + h7 + h9) - (h2 + h4 + h6 + h8)) % 10;
    h11 = (h1 + h2 + h3 + h4 + h5 + h6 + h7 + h8 + h9 + h10) % 10;
    printf("\nTC kimlik no'nuz %1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d\n", h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
    system("pause");
    return 0;
}