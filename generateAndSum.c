#include <stdio.h>

/*Design an algorithm which generates even numbers between 1000 and 2000 and then 
prints them in the standard output. It should also print total sum. */

int main(){
	
	int toplam,i;
	
	toplam=0;
		
		printf("1000 ile 2000 arasindaki cift sayilar:\n");
		for(i=1000;i<=2000;i+=2)
		{
		printf("%d\n",i);
		toplam+=i;				
		}
		printf("1000 ile 2000 arasindaki cift sayilarin toplami: ");
		printf("%d",toplam);

	return 0;
}

/* 1000 ile 2000 arasindaki cift sayilari yazdir ve ayrica 
bu cift sayilarin birbiri ile toplamini da yazdir. */