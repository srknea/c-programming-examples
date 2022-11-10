#include <stdio.h>

//Determine and output whether number N is even or odd.

int main(){
	
	int sayi;
	
	printf("Sayi girin: ");
	scanf("%d",&sayi);
	
		if(sayi%2==0)
		printf("%d cift sayidir",sayi);
		else
		printf("%d tek sayidir",sayi);
		
	return 0;
}

// N sayisinin tek mi cift mi oldugunu belirle ve yazdir.