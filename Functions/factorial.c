#include <stdio.h>
// Write the function that finds the factorial of the entered number.
// Girilen sayinin faktoriyelini bulan fonksiyonu yaziniz.
int faktoriyel(int);

int main(){
	
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	printf("Girilen sayinin faktoriyeli: %d\n",faktoriyel(sayi));
	
	//p5rintf("%d",faktoriyel(5));
	
return 0;	
}

int faktoriyel(int sayi){
	
		int A,i;
		A=1;
		for(i=2;i<=sayi;i++)
		{
		A=A*i;	
		}
		
	return A;
}


