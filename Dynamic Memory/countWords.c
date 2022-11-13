#include <stdio.h>
#include <stdlib.h>

//Write a C program that counts words in a given text or sentence using dynamic memory.

int main(){
	
	char *ptr;
	
	ptr = (char*)calloc(1,sizeof(char));
	
	int n=0;
	
	while(1){
		
		if(n!=0){
			ptr = (char *) realloc(ptr, (1+n) * sizeof(char));
		}	
		
		scanf("%c",(ptr+n));
		
		if(*(ptr+n)=='\n'){
		break;	
		}		
		n++;
	}
	*(ptr+n)='\0';


	int counter=0;
	
	while(*ptr!='\0'){
		if(*ptr==' '){
		counter++;	
		}
		ptr++;
	}
	counter++;

	printf("Girilen cumledeki kelime sayisi |%d| dir.",counter);

	free(ptr);
return 0;
}


/*
Belli bir metinde veya cümledeki kelimeleri sayan C programını dinamik bellek kullanarak yazınız.
*/