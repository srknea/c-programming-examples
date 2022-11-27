#include <stdio.h>
#include <math.h>

// Write C code to swap first and last digits of a number.

int main(){
	
	int sayi,sayi2,sayi3,ilkbasamak,sonbasamak,basamaksayisi,toplam,a;
	printf("Bir sayi girin: ");
	scanf("%d",&sayi);
	sayi2=sayi;
	sayi3=sayi;
	basamaksayisi=0;
	toplam=1;
	ilkbasamak=sayi%10;
	
	while(sayi2>9)
	{
	sayi2=sayi2/10;
	}
	sonbasamak=sayi2;
	
	while(sayi3>0)
	{
	sayi3=sayi3/10;       
	basamaksayisi++;
	}
	a=pow(10,basamaksayisi-1);
	sayi=sayi%a;
	sayi=sayi/10;
	sayi=sayi*10+sonbasamak;
	sayi=ilkbasamak*a+sayi;

	printf("Yeni sayi: %d",sayi);

return 0;	
}

//Draw a flow chart to swap first and last digits of a number.
/* 1-22 Draw a flow chart to change the first and last digits of the number.
Sayinin ilk ve son hanelerini degistirmek için bir akis semasi çizin. */