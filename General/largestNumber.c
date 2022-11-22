#include <stdio.h>

//Find the largest of three numbers A, B, and C. 

int main(){
	
	int sayi1,sayi2,sayi3;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&sayi1);	
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	printf("Ucuncu sayiyi giriniz: ");
	scanf("%d",&sayi3);
	
		if (sayi1>sayi2 && sayi1>sayi3)
		{
			printf("En buyuk sayi %d",sayi1);
			
		}
		else if(sayi2>sayi1 && sayi2>sayi3)
		{
			printf("En buyu sayi %d",sayi2);
		}
		else
		{
		printf("En buyuk sayi %d dir.",sayi3);	
		}
	
return 0;
}

// Draw a flowchart to find the largest of three numbers A, B, and C. 
/* Uc A,B,C sayisindan en buyugunu bulmak icin akis semasi cizin. */