#include <stdio.h>

/*
Two numbers stored in integer variables A and B are entered from the keyboard without using a third variable.
Write a programme in C language that writes the values of variables A and B to the screen by replacing them between themselves.
*/

int main()
{
	
	int A,B;
	
	printf("A degerini girniz: ");
	scanf("%d",&A);
	printf("B degerini girniz: ");
	scanf("%d",&B);
	
	
	A=A+B;
	
	B=A-B;
	A=A-B;
	
	
	
	printf("Son A degeri: %d\n",A);
	printf("Son B degeri: %d",B);
	
	return 0;
}


/*Ucuncu bir degisken kullanmadan klavyeden A ve B tamsayi degiskenlerinde tutulan iki sayi giriliyor.
A ve B degiskenlerinin degerlerini kendi arasinda yer degistirerek ekrana yazdiran programi C dili ile yaziniz.*/