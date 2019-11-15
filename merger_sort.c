#include <stdio.h>
#include <stdlib.h>

int arrayData[6] = {4, 9, 1, 5, 3, 8};
int arrayTemp[5];

int mergeSort(int awal, int tengah, int akhir) {
	int a, b, i;
	a = awal;
	b = tengah + 1; 
	
	for(i = awal; a <= tengah && b <= akhir; i++) {
      	if(arrayData[a] <= arrayData[b]) {
      		arrayTemp[i] = arrayData[a++];
		} else {
			arrayTemp[i] = arrayData[b++];
		}
  	}
   
	while(a <= tengah) {
   		arrayTemp[i++] = arrayData[a++];
   	}  

   	while(b <= akhir) {
   		arrayTemp[i++] = arrayData[b++];	
	}  

   	for(i = awal; i <= akhir; i++) {
   		arrayData[i] = arrayTemp[i];
	}
}

int pengurutan(int awal, int akhir) {
   	int tengah;
   
   	if(awal < akhir) {
		tengah = (awal + akhir) / 2;
		pengurutan(awal, tengah);
		pengurutan(tengah+1, akhir);
		mergeSort(awal, tengah, akhir);
	} else { 
      	return 0;
   	}   
}

int main() { 
	int i;
	
	printf("Data 		: ");	
	for(i = 0; i <= 5; i++){
		printf("%d ", arrayData[i]);
	}
	
	pengurutan(0, 5);
	
	printf("\nMerge Sort 	: ");
   	for(i = 0; i <= 5; i++){
   		printf("%d ", arrayData[i]);
	}
}
