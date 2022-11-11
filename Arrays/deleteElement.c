#include <stdio.h>

// Delete an element from an array at specified position 

/*
Example

Input

Input array elements: 10 20 30 40 50
Input position to delete: 2

Output
Array elements: 10, 30, 40, 50
*/

int main(){
	
	int dizi[100];
	int dizi2[100];
	int dizi3[100];
	int elemanSayisi,i,A;
	
	dizi2[100]=dizi[100];
	
	printf("Dizinizin kac elemanli olacagini giriniz: ");
	scanf("%d",&elemanSayisi);
	
		for(i=0;i<elemanSayisi;i++)
		{
		scanf("%d",&dizi[i]);	
		}
		
		printf("Dizinin elemanlari: ");
		
		for(i=0;i<elemanSayisi;i++)
		{
		printf("%d ",dizi[i]);
		}	
		
	printf("\n");
	printf("Dizinin kacinci elemanini diziden cikarmak istediginizi giriniz: ");
	scanf("%d",&A);
	
	for(i=0;i<elemanSayisi-1;i++)
	{
		if(i<A-1)
		{
		dizi3[i]=dizi[i];	
		}	
		else
		{	
		dizi3[i]=dizi[i+1];	
		}
	}
	
		printf("Yeni dizinin elemanlari: ");
		
		for(i=0;i<elemanSayisi-1;i++)
		{
		printf("%d ",dizi3[i]);
		}
	
		
	
return 0;	
}