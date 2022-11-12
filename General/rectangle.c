#include <stdio.h>

/* Write an algorithm and draw a flowchart that will 
read the two sides of a rectangle and calculate its area and perimeter. */

int main(){
	
	int kisa,uzun,cevre,alan;
	
	printf("Kisa kenari giriniz: ");
	scanf("%d",&kisa);
	
	printf("Uzun kenari giriniz: ");
	scanf("%d",&uzun);
	
	cevre=2*kisa+2*uzun;
	alan=kisa*uzun;
	
	printf("Dikdortgenin cevresi: %d\n",cevre);
	printf("Dikdortgenin alani: %d",alan);
	
	
	return 0;
}

/* Bir dikdortgenin cevresini ve alanini bulan programin kodunu yaziniz */