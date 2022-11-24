/*C Program to Count the Number of Vowels, Consonants and so on 

Enter a line of string: adfslkj34 34lkj343 34lk 
Vowels: 1 
Consonants: 11 
Digits: 9 
White spaces: 2 */

#include <stdio.h>

int main(){
	
	char string[100];
	int i=0;
	int unluHarf=0,unsuzHarf=0,rakam=0,bosluk=0;
	
	gets(string);
	
	while(string[i]!='\0')
	{
		if(string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z')
		{
			if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='u' || string[i]=='o' || 
			   string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='U' || string[i]=='O' )	
			{
			unluHarf++;	
			}   
			else
			unsuzHarf++;
		}
		else if(string[i]>='0' && string[i]<='9')
		{
		rakam++;	
		}
		else if(string[i]==' ')
		{
		bosluk++;	
		}
	i++;	
	}
	
	printf("String icindeki unlu harf sayisi: %d\n",unluHarf);
	printf("String icindeki unsuz harf sayisi: %d\n",unsuzHarf);
	printf("String icindeki rakam sayisi: %d\n",rakam);
	printf("String icindeki bosluk sayisi: %d\n",bosluk);
	
	
return 0;	
}

/* Bir string oku daha sonra bu stringdeki sesli harf sayilarini,sessiz harf sayilarini,rakam sayilarini,
bosluk sayilarini bul ve yazdir */ 