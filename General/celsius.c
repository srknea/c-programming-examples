#include <stdio.h>

// Determine whether a temperature is below or above the frezzing point.

// Celsius

int main(){
	
	int sicaklik;
	
	printf("Sicaklik girin: ");
	scanf("%d",&sicaklik);
		
		if(sicaklik==0)
		{
			printf("Girdiginiz sicaklik degeri donma noktasidir.");
		}
		else if(sicaklik>0)
		{
			
		printf("Girdiginiz sicaklik degeri donma noktasinin ustundedir.");
			
		}
		else
		{
		printf("Girdiginiz sicaklik degeri donma noktasinin altindadir.");
				
		}	
			
	return 0;
}

//Sicakligin donma noktasinin ustunde mi altinda mi oldugunu belirleyin.