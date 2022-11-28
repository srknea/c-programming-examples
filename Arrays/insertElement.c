// Insert an Element in a Specified Position in a given Array.
/*
Example

Input
					
Input array elements: 10, 20, 30, 40, 50
Input element to insert: 25
Input position where to insert: 3
							
Output
Elements of array are: 10, 20, 25, 30, 40, 50
*/


#include <stdio.h>

int main(){
		
	int dizi[20];
	int eleman,i,k,z,x;
	
	printf("Ilk dizinin kac elemanli olacagini giriniz: ");
	scanf("%d",&x);
	
	for(z=0;z<x;z++)
	{
	printf("Dizinin %d. elemanini giriniz: ",z+1);
	scanf("%d",&dizi[z]);	
	}
	int c;
	int dizi2[20];
	printf("Diziye ekleyeceginiz elemani giriniz: ");
	scanf("%d",&eleman);
	
	printf("Elemani kacinci indise yerlestireceginizi giriniz: ");
	scanf("%d",&i);

	
	dizi2[i]=eleman;	
	
	for(c=0;c<x+1;c++)
	{
		if(c<i)
		{
		dizi2[c]=dizi[c];
		}
		else
		{
		dizi2[c+1]=dizi[c];	
		}	
	}
	

	for(i=0;i<x+1;i++)
	{
	printf("%d\n",dizi2[i]);	
	}
	
return 0;	
}