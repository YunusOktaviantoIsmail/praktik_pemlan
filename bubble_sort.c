#include <stdio.h>
#include <stdlib.h>

int cetak(int i, int kode[]){
	printf("Data Asli 		: ");
	for(i=0; i<8; i++){
		printf("%d ", kode[i]);
	}
}

//SORTING ASCENDING
int bubble_sort(int k, int j, int kode[]){
	int temp;
	for(k=0; k<7; k++){
		for(j=7; j>k; j--){
			if(kode[j-1] > kode[j]){
				temp = kode[j-1];
				kode[j-1] = kode[j];
				kode[j] = temp;
			}
		}
	}
	
	printf("\nData Setelah diurutkan 	: ");
	for(k=0; k<8; k++){
		printf("%d ", kode[k]);
	}
}

// SORTING DESCENDING
int bubble_sort2(int k, int j, int kode[]){
	int temp;
	for(k=0; k<7; k++){
		for(j=7; j>k; j--){
			if(kode[j-1] < kode[j]){
				temp = kode[j-1];
				kode[j-1] = kode[j];
				kode[j] = temp;
			}
		}
	}
	
	printf("\nData Setelah diurutkan 	: ");
	for(k=0; k<8; k++){
		printf("%d ", kode[k]);
	}
}

int main() {
	int kode[8] = {50, 12, 15, 22, 20, 36, 26, 30};
	int i, k, j, kunci;
	
	cetak(i, kode);
	bubble_sort(k, j, kode);
	bubble_sort2(k, j, kode);
	
	return 0;
}
