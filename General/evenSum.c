#include <stdio.h>

// A programme that returns the even numbers between two entered numbers and the sum of these numbers

int main()
{
	
	int sayi1,sayi2,i,toplam;
	
	printf("Kucuk degeri giriniz: ");
	scanf("%d",&sayi1);
	printf("Buyuk degeri giriniz: ");
	scanf("%d",&sayi2);
	toplam=0;
	for(i=1;i<=sayi2;i++)
	{
		
		if((i>=sayi1) && (i%2==0))
		{
		printf("%d\n",i);	
		toplam+=i;
		}	
	}
	printf("Toplam: %d",toplam);
	
return 0;
}

/* Girilen iki sayi arasindaki cift sayilari ve bu sayilarin toplamini veren program */