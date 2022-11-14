#include <stdio.h>

//Write a C program to sort a given array using Selection Sort.

void selectionSort(int myarray[],int size){
	int min,index;
	
	for(int i=0;i<size-1;i++){
		min=myarray[size-1];
		index=size-1;
		for(int j=i;j<size-1;j++){
			if(myarray[j]<min){
				min=myarray[j];
				index=j;	
			}
		}
		myarray[index]=myarray[i];
		myarray[i]=min;
	}
	
	for(int i=0;i<5;i++){
		printf("%d\n",myarray[i]);
	}
	

}


int main(){
	
	int array[5]={65,34,23,87,12};
	int min,idex;
	
	selectionSort(array,5);

return 0;	
}

//Seçim Sıralaması'nı kullanarak belirli bir diziyi sıralamak için bir C programı yazın