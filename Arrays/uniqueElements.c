#include <stdio.h>
//Print all unique elements in the array.

int main(){
	
	int i,k,sayac;
	
	int dizi[8]={1,6,3,6,4,1,6,6};
	
	for(i=0;i<8;i++)
	{
	sayac=0;	
		for(k=0;k<8;k++)
		{
			if(dizi[i]==dizi[k])
			{
			sayac++;	
			}			
		}
		if(sayac==1)
		{
		printf("%d\n",dizi[i]);	
		}
		
	}
	
	
return 0;	
}

/* int dizi[]={1,6,3,6,4,1,6}  Bu dizideki essiz elemanlar 3 ve 4 tur. Cunku dizide 
kendilerinden yalnizca bir tane vardir. */