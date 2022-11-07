#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int dizi[10][10];
	int i,ii;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		for(ii=0;ii<10;ii++)
		{
		dizi[i][ii]=rand()%256;	
		}
	}
	
	for(i=0;i<10;i++)
	{
		for(ii=0;ii<10;ii++)
		{
		printf(" %d ",dizi[i][ii]);	
		}
		printf("\n");
	}	
		
return 0;	
}