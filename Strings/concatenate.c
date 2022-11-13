/* C Program to Concatenate Two Strings 

Enter first string: lol 

Enter second string: :) 

After concatenation: lol:)
*/

#include <stdio.h>

int main(){
	
	char string[10];
	char string2[10];
	char string3[20];
	int k=0,kk=0;
	int i;
	
	printf("Birinci stringi giriniz: ");
	gets(string);
	
	printf("Ikinci stringi giriniz: ");
	gets(string2);
	
	printf("Girdiginiz birinci string: %s\n",string);
	printf("Girdiginiz ikinci string: %s\n",string2);
		

		
		while(string[k]!='\0')
		k++;
		printf("Birinci dizinin uzunlugu: %d\n",k);		
		
		while(string2[kk]!='\0')
		kk++;	
		printf("Ikinci dizinin uzunlugu: %d\n",kk);
		
		for(i=0;i<k+kk+1;i++)
		{
			if(i<k)
			string3[i]=string[i];
					
			else if (i<k+kk)
			string3[i]=string2[i-k];
			
			else
			string3[i]='\0';
		}
	
		printf("Giridiginiz iki dizinin birlesimi: %s",string3);
	
return 0;	
}