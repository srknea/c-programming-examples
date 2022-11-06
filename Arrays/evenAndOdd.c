#include <stdio.h>

/*Write the code of a programme that puts even numbers at the beginning and odd 
numbers at the end of an array without using any other array. 

Input array:  5 7 2 9 5 3 8 6
Output array: 2 8 6 3 5 9 7 5

*/


int main(){

	int dizi[]={5,7,2,9,5,3,8,6};
		
	for(int i=0;i<8;i++){
		printf("%d ",dizi[i]);
	}
	printf("\n");
	
	int temp;
	int i=0,k=7,N=8;
	while(i<N){
		
		if(dizi[i]%2==0 || dizi[k]%2==1){
			if(dizi[i]%2==0){
				i++;
				continue;
			}
			if(dizi[k]%2==1){
				k--;
				N--;
				continue;
			}
		}
		else{
			temp=dizi[k];
			dizi[k]=dizi[i];
			dizi[i]=temp;	
		}	
	}

	
	
	for(int i=0;i<8;i++){
		printf("%d ",dizi[i]);
	}
	
	
	
return 0;	
}

/* 
Bir dizideki çift sayilari basa tek sayilari sona atan programın kodunu baska bir 
dizi kullanmadan yaziniz

Giriş dizisi: 5 7 2 9 5 3 8 6
Çıkış dizis:  2 8 6 3 5 9 7 5

*/

// srknea