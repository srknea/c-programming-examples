#include <stdio.h>
// Finding the number of digits in the string
int bul(char *mystring){
	
	static int sayac=0;
	
	while(*mystring!=NULL){	
	
		if(*mystring<='9' && *mystring>='0' ){
			sayac++;
		}
		*mystring++;
	}
	printf("String icindeki rakam sayisi: %d",sayac);
	
}


int main(){

	char string[100]="Ben 21 yasinda bir programciyim";
	
	bul(string);
	
	
	return 0;
}

//String icindeki rakam sayisini bulma