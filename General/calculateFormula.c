#include <stdio.h>

/* Design an algorithm with a natural number, n, as 
its input which calculates the following formula 
and writes the result in the standard output: S = ½ + ¼ + … +1/n */

int main(){
	
	float toplam,i,n;
	
	printf("Pozitif bir cift sayi giriniz: ");
	scanf("%f",&n);
	
	toplam=0;
	
	for(i=2;i<=n;i=i+2)
	{
	
	toplam+=1/i;
	}
	printf("Toplam: %f",toplam);	
			
return 0;	
}