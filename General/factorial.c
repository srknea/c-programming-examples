#include <stdio.h>

// Write a C program for computing factorial N (N!). 

int main(){
	
	int a,i,sum;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&a);
	sum=a;
	i=1;
	if(a==0||a==1)
	{
	printf("1");
	}
	else
	{
		while(i<a)
		{
		sum=sum*i;
		i++;	
		}
		
		printf("%d",sum);
	}
	
	
return 0;
}