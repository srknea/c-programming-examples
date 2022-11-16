#include <stdio.h>

// The code of the program that finds whether the entered number is a prime number or not.

int main(){
	
	int sayi,sayac,i;

	printf("Bir sayi girin: ");
	scanf("%d",&sayi);
	
		if(sayi==1)
		{
		printf("n asal sayi degildir.");	
		}
		sayac=0;
			for(i=1;i<=sayi;i++)
			{
				if(sayi%i==0)
				{
				sayac++;					
				}		
			}
				if(sayac==2)
				{
				printf("%d asal sayidir.",sayi);	
				}
				else
				printf("%d asal sayi degildir.",sayi);
	

	
	return 0;
}

/* Girilen sayinin asal sayi olup olmadigini bulan programin kodu. */