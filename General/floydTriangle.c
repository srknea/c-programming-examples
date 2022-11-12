#include <stdio.h>

/*
Print the Floyd's Triangle. 
1  
01 
101  
0101  
10101 
*/

int main(){
	
	int satirSayisi,i,ii,a,b;
	
	printf("Kac satir istediginizi giriniz: ");
	scanf("%d",&satirSayisi);
	
	a=1;
	for(i=1;i<=satirSayisi;i++)
	{	
	a++;		
		
			if(a%2==0)
			{
			printf("1");
			b=1;	
			}
			else
			{
			printf("0");
			b=2;
			}
			
		for(ii=2;ii<=i;ii++)
		{	
			if(b%2==0)
			{
			printf("1");
			b++;	
			}
			else
			{
			printf("0");
			b++;
			}
		}	
	
	printf("\n");	
	}
	
	
	
	
return 0;	
}

/* 
Draw a flow chart to print the Floyd's Triangle. 
1  
01 
101  
0101  
10101 
*/
