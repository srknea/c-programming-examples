#include <stdio.h>

/* Write the program in C language that calculates the sum of two numbers entered from 
the keyboard and prints it on the screen.*/

int main()
{
	int sayi1,sayi2,toplam;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi girniz: ");
	scanf("%d",&sayi2);
	
	toplam=(sayi1)+(sayi2);
	
	printf("Girilen iki sayinin toplami: ");
	printf("%d",toplam);
	
	return 0;
}

/*Klavyeden girilen iki sayinin toplamini hesaplayip ekrana yazdiran programi C dili
ile yaziniz. */