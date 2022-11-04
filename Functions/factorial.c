#include <stdio.h>
// Write the function that finds the factorial of the entered number.
int factorial(int);

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	printf("The factorial of the entered number: %d\n",factorial(number));
	
	//printf("%d",factorial(5));
	
return 0;	
}

int factorial(int number){
	
		int A,i;
		A=1;
		for(i=2;i<=number;i++)
		{
		A=A*i;	
		}
		
	return A;
}

// Girilen sayinin faktoriyelini bulan fonksiyonu yaziniz.