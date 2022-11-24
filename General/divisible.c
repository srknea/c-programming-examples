#include <stdio.h>

/* Write C code to find the number and sum of all integer between 100 and 200
which are divisible by 9. */

int main()
{
	int i,toplam;	
	toplam=0;
	for(i=100;i<=200;i++)
	{
		if(i%9==0)
		{
		toplam+=i;	
		}
		
	}
		
	printf("Toplam: %d",toplam);	
return 0;	
}