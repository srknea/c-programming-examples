#include<stdio.h>

/*Write the C code that sums two matrices with the same number of rows and columns. 
Matrix values will be entered from the keyboard.*/

int main(){
	
	int dizi1[20][20];
	int dizi2[20][20];
	int diziToplam[20][20];
	int i,ii,satir,sutun;
	
	printf("Matrislerinizin satir sayisini giriniz: ");
	scanf("%d",&satir);
	printf("Matrislerinizin sutun sayisini giriniz: ");
	scanf("%d",&sutun);
		
	printf("Birinci matrisinizi giriniz:\n");	
	for(i=0;i<satir;i++)
	{
		for(ii=0;ii<sutun;ii++)
		{
		scanf("%d",&dizi1[i][ii]);	
		}
	}
	
	printf("Ikinci matrisinizi giriniz:\n");	
	for(i=0;i<satir;i++)
	{
		for(ii=0;ii<sutun;ii++)
		{
		scanf("%d",&dizi2[i][ii]);	
		}
	}
	
	printf("Girdiginiz birinci matrisiniz:\n");	
	for(i=0;i<satir;i++)
	{
		for(ii=0;ii<sutun;ii++)
		{
		printf("%d ",dizi1[i][ii]);	
		}
		printf("\n");
	}
	
	printf("Girdiginiz ikinci matrisiniz:\n");	
	for(i=0;i<satir;i++)
	{
		for(ii=0;ii<sutun;ii++)
		{
		printf("%d ",dizi2[i][ii]);	
		}
		printf("\n");
	}
	
    printf("Sonuc:\n");	
	for(i=0;i<satir;i++)
	{
		for(ii=0;ii<sutun;ii++)
		{
		diziToplam[i][i]=dizi1[i][ii]+dizi2[i][ii];
		}
	}
	
	for(i=0;i<satir;i++)
	{
		for(ii=0;ii<sutun;ii++)
		{
		printf("%d ",diziToplam[i][i]);
		}
		printf("\n");
	}
	
return 0;	
}

/*Ayni satir ve sütun sayisina sahip iki matrisi toplayan C kodunu yaziniz. 
Matris degerleri klavyeden  girilecek*/