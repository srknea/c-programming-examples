#include <stdio.h>

// Find sum of all prime numbers between 1 to n. 

int main(){
	
	int i,ii,sayac,n,toplam;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	
	toplam=0;
	
	for(i=1;i<=n;i++)
	{
	sayac=0;
		for(ii=1;ii<=i;ii++)
		{
			if(i%ii==0)
			{
			sayac++;	
			}	
		}
		if(sayac==2)
		{
		toplam+=i;	
		}
	}
	printf("1 ile %d arasindaki asal sayilarin toplami: %d",n,toplam);
return 0;	
}

// Draw a flow chart to find sum of all prime numbers between 1 to n. 
// 1 ile n arasindaki tum asal sayilarin toplamini yazdirmak icin bir akis semasi ciziniz