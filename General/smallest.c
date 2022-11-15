#include <stdio.h>

//Write a C program to find the smallest of three numbers A, B, and C given 
//from keyboard

int main(){
	
	int a,b,c;
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&a);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	printf("Ucuncu sayiyi giriniz: ");
	scanf("%d",&c);
	
		if(a<b && a<c)
		{
		printf("En kucuk sayi: %d",a);	
		}
		else if(b<a && b<c)
		{
		printf("En kucuk sayi: %d",b);	
		}
		else
		{
		printf("En kucuk sayi: %d",c);
		}
	
return 0;
}