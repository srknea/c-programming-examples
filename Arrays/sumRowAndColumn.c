#include <stdio.h>

// Find sum of each row and column of a matrix. 
int main(){
	
	int matris[10][10];
	int k,i,toplam=0;
	int satirSayisi,sutunSayisi;
	
	printf("Matrisinizin satir sayisini giriniz: ");
	scanf("%d",&satirSayisi);
	printf("Matrisinizin sutun sayisini giriniz: ");
	scanf("%d",&sutunSayisi);
	
	for(k=0;k<satirSayisi;k++)
	{
		for(i=0;i<sutunSayisi;i++)
		{
		scanf("%d",&matris[k][i]);	
		}
	}
	
	printf("Girdiginiz matris:\n");
	
	for(k=0;k<satirSayisi;k++)
	{
		for(i=0;i<sutunSayisi;i++)
		{
		printf("%d ",matris[k][i]);	
		}
		printf("\n");
	}
	
	printf("*******Satirlarin Toplami*******\n");
	for(k=0;k<satirSayisi;k++)
	{
		for(i=0;i<sutunSayisi;i++)
		{
		toplam=toplam+matris[k][i];
		}
		printf("%d. satirin toplami: %d\n",k+1,toplam);
		toplam=0;
	}
	printf("*******Sutunlarin Toplami*******\n");
	for(i=0;i<sutunSayisi;i++)
	{
		for(k=0;k<satirSayisi;k++)
		{
		toplam=toplam+matris[k][i];
		}
		printf("%d. sutunun toplami: %d\n",i+1,toplam);
		toplam=0;
	}

return 0;	
}

// Kullanicidan bir matris iste sonra her satirdaki ve sutundaki sayilarin toplamini yazdir.