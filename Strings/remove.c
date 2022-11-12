/* C Program to Remove all Characters in a String Except Alphabet 

Enter a string: p2'r-o@gram84iz./ 

Output String: programiz
*/

#include<stdio.h>

int main(){
	
	char string[100];
	int i=0,k=0;
	gets(string);
	
	while(string[i]!='\0')
	{
		if(string[i]>='a' && string[i]<='z')
		{
		string[k]=string[i];
		k++;	
		}
	i++;	
	}
	string[k]='\0';
	
	puts(string);
		
return 0;	
}

	