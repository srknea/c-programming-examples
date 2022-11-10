#include<stdio.h>
// Print or display upper triangular matrix.
int main(){
	
	int dizi[100][100]={{1,2,3},{4,5,6},{7,8,9}};
	int i,ii;

	for(i=0;i<3;i++)
	{
		for(ii=0;ii<3;ii++)
		{	
		printf("%d",dizi[i][ii]);	
		}
		printf("\n");
	}
	printf("\n");
	
	
	for(i=0;i<3;i++)
	{
		for(ii=0;ii<3;ii++)
		{	
			if(i<ii)
			{
			dizi[i][ii]=0;	
			}
		}
	}

printf("Upper Triangular Matrix:\n\n");	
	for(i=0;i<3;i++)
	{
		for(ii=0;ii<3;ii++)
		{	
		printf("%d",dizi[i][ii]);	
		}
		printf("\n");
	}
	
return 0;	
}