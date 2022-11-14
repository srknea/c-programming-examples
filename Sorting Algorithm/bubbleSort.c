#include <stdio.h>

//Write a C program to sort a given array using Bubble Sort.

void bubbleSort(int myarray[],int size){
	int gecici;
	
	for(int i=0;i<size-1;i++){
		for(int k=0;k<size-1-i;k++){
			if(myarray[k]>myarray[k+1]){
			gecici=myarray[k];
			myarray[k]=myarray[k+1];	
			myarray[k+1]=gecici;
			}
		}
	}
}


int main(){
	
	int array[5]={23,81,11,34,65};
	
	bubbleSort(array,5);
	
	for(int i=0;i<5;i++){
		printf("%d\n",array[i]);
	}
	


return 0;	
}

// Kabarcık Sıralaması'nı kullanarak belirli bir diziyi sıralamak için bir C programı yazın