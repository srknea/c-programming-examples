#include <stdio.h>
// Write the code of the program that changes the letters of the written word alphabetically.
int main(){
	
	char string[100];
	gets(string);
	int uzunluk=0,temp;
	
	while(string[uzunluk]!='\0'){
	uzunluk++;	
	}
	
	for(int i=0;i<uzunluk-1;i++)
	{	
		for(int ii=i+1;ii<uzunluk;ii++)
		{
			if(string[i]>string[ii])
			{
			temp=string[i];
			string[i]=string[ii];
			string[ii]=temp;	
			}	
		}
	}
	
	puts(string);
	printf("%s",string);
	
return 0;	
}

// Yazilan kelimenin alfabetik olarak harflerini degistiren programin kodunu yaziniz.

//srknea