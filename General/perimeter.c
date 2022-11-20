#include <stdio.h>

/*
Code that calculates the perimeter and area of the square 
whose side length is entered.
*/


int main() {
		
	int kenar,cevre,alan;
	
	printf("Karenin bir kenarinin uzunlugunu giriniz: ");
	scanf("%d",&kenar);

	alan=kenar*kenar;
	cevre=kenar*4;
	
	printf("Karenin alani: %d\n",alan);
	printf("Karenin cevresi: %d",cevre);
	
	
	return 0;
	
}

//Kenar uzunlugu girilen karenin cevresini ve alanini hesaplayan kod.