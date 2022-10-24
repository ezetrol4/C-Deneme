#include <stdio.h>
#include <stdlib.h>



//SWİTCH / CASE

//switch(değişken)
//{
//case 1:......
//case 2:......
//}

int main() {
	/*int sayi;
	printf("Ay Numarasi Giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf("Ocak",sayi);	
		break;
		case 2:printf("Subat",sayi); 
		break;
		case 3:printf("Mart",sayi); 
		break;
		case 4:printf("Nisan",sayi); 
		break;
		case 5:printf("Mayis",sayi); 
		break;
		case 6:printf("Haziran",sayi); 
		break;
		case 7:printf("Temmuz",sayi); 
		break;
		case 8:printf("Agustos",sayi); 
		break;
		case 9:printf("Eylul",sayi); 
		break;
		case 10:printf("Ekim",sayi); 
		break;
		case 11:printf("Kasim",sayi); 
		break;
		case 12:printf("Aralik",sayi); 
		break;
		default: printf("Hatali Giris Yaptiniz");
		break;		
	}
	*/
	
	char ders;
	printf("Ders Kodu: ");
	scanf("%s",&ders);
	
	switch(ders)
	{
		case 't':printf("Turkce");
		break;
		case 'm':printf("Matematik");
		break;
		case 'f':printf("Fen Bilimleri");
		break;
		case 's':printf("Sosyal Bilgiler");
		break;
		default:printf("Hatali Veya Buyuk Harf Kullanimi");
		break;	
	}
	
	
	
	
	
	return 0;
}