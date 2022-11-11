#include <stdio.h>

//Put Even & Odd Elements of an Array in 2 Separate Arrays 

int main (){
	
	int k,l,m,lElemanSayisi,mElemanSayisi,i,elemanSayisi;
	int dizi[20];
	int tek[20];
	int cift[20];
	l=-1;
	m=-1;
	
	printf("Dizinizin eleman sayisini giriniz: ");
	scanf("%d",&elemanSayisi);
	
	for(i=0;i<elemanSayisi;i++)
	{
	printf("Dizinizin %d. elemanini giriniz: ",i+1);	
	scanf("%d",&dizi[i]);	
	}
	
	
		for(k=0;k<elemanSayisi;k++)
		{
			if(dizi[k]%2==0)
			{
			m++;	
			cift[m]=dizi[k];
			}
			else
			{
			l++;
			tek[l]=dizi[k];
			}				
		}
	lElemanSayisi=l+1;
		printf("Dizideki tek elemanlar:\n");
		for(l=0;l<lElemanSayisi;l++)
		{
		printf("%d\n",tek[l]);			
		}
	mElemanSayisi=m+1;
		printf("Dizideki cift elemanlar:\n");
		for(m=0;m<mElemanSayisi;m++)
		{
		printf("%d\n",cift[m]);			
		}
		
return 0;	
}

/*Bir dizideki cift ve tek sayilari iki farkli dizi olarak
ayircak programi yaziniz.*/
//5-1