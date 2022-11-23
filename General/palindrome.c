#include <stdio.h>

/* Write a C program to check whether a given number from keyboard is 
Palindrome number or not */

int main()
{
	int sayi,sayiKontrol,basamak,toplam;
	
	printf("Bir sayi girin: ");
	scanf("%d",&sayi);
	sayiKontrol=sayi;
	toplam=0;
	
		while(sayi>0)
		{
		basamak=sayi%10;
		toplam=toplam*10+basamak;
		sayi=sayi/10;
		}
				
		if(sayiKontrol==toplam)		
		{
		printf("%d polindromik bir sayidir.",sayiKontrol);
		}
		else
		{
		printf("%d polindromik bir sayi degildir.",sayiKontrol);
		}

return 0;
}

// 10 basamaktan fazla bir sayi icin calismiyor.
//Draw a flow chart to check Whether a Number is Palindrome or Not.
