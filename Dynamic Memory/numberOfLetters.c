#include <stdio.h>
#include <stdlib.h>

/*
A programme that reads a text expression entered from the keyboard and gives the number of letters in this text 
write using dynamic memory allocation. 
Example : For "Karabuk University"; 
2 "a", 1 "b" ....
*/

int main(){
	
	int i,sayac,ii;
	
	char *string;
	
	string = (char*)calloc(1,sizeof(char));
	
	int n=0;
	
	while(1){
		
		if(n!=0){
			string = (char *) realloc(string, (1+n) * sizeof(char));
		}	
		
		scanf("%c",(string+n));
		
		if(*(string+n)=='\n'){
		break;	
		}		
		n++;
	}
	*(string+n)='\0';
	
	
	int sayacc[100];
	char dizieleman[100];
	
	for(i=0;string[i]!='\0';i++)
	{	
	sayac=1;
		if(string[i]!='!')
		{
		
    		for(ii=0;string[ii]!='\0';ii++)
			{	
				if(i!=ii)
				{
					if(string[i]==string[ii])
					{
					sayac++;
					string[ii]='!';	
					}	
				}	
			}
		sayacc[i]=sayac;
		dizieleman[i]=string[i];	
		}
		else
		{
		sayacc[i]=-808;
		dizieleman[i]='!';
		}
	}
	
		
	for(int k=0;k<i;k++)
	{
		if(sayacc[k]!=-808 && dizieleman[i]!='!')
		{
		printf("Dizide %d adet ***%c*** vardir\n",sayacc[k],dizieleman[k]);	
		}
	}
	
return 0;	
}

/*
Klavyeden girilen text bir ifadeyi okuyan ve bu text in içindeki harflerin sayısını veren programı 
dinamik bellek yönetimi kullanarak yazınız. 
Örnek : “Karabük Üniversitesi” için; 
2 adet “a”, 1 adet “b”….
*/	
	