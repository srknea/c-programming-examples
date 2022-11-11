#include <stdio.h>

//Write a C program to sort a given array using Insertion Sort.

void insertionSort(int myarray[], int size)  
{  
    int i, key, j;  
    for (i = 1; i < size; i++) 
    {  
        key = myarray[i];  
        j = i - 1;  
  
        while (j >= 0 && myarray[j] > key) 
        {  
            myarray[j + 1] = myarray[j];  
            j = j - 1;  
        }  
        myarray[j + 1] = key;  
    }  
    
    for(int i=0;i<size;i++){
    	printf("%d\n",myarray[i]);
	}
    
} 

int main(){
	
	int array[5]={43,12,34,3,26};
	insertionSort(array,5);	
	
return 0;	
}

/* Araya Ekleme Sıralaması'nı kullanarak belirli bir diziyi 
sıralamak için bir C programı yazın */