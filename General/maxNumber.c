#include<stdio.h>

// Write the function to print the maximum of three numbers.

int max3(int,int,int);

int main(){
	
	int sayi,sayi2,sayi3;
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	printf("Ucuncu sayiyi giriniz: ");
	scanf("%d",&sayi3);
		
	printf("Girilen sayilardan en buyugu: %d",max3(sayi,sayi2,sayi3));
	
}

int max3(int sayi,int sayi2,int sayi3){
	
	int A;
	
	if(sayi>sayi2 && sayi>sayi3)
	{
	A=sayi;	
	}
	else if(sayi2>sayi && sayi2>sayi3)
	{
	A=sayi2;	
	}
	else
	{
	A=sayi3;	
	}
	
	return A;
}

// Uc sayidan max olani yazdiracak fonksiyonu yaziniz.