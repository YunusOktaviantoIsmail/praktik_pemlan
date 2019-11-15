#include <stdio.h>
#include <stdlib.h>

int selection_asc(int A[]){
	printf("\n");
	int indeks_min, i, j, x;
	
	for(j=0; j<5; j++){
		indeks_min = j;
		for(i=j+1; i<5; i++){
			if(A[i] < A[indeks_min]){
				indeks_min = i;
			}
		}
		x = A[indeks_min];
		A[indeks_min] = A[j];
		A[j] = x;
	}
	
	printf("Data setelah diurutkan = ");
	for(i=0; i<5; i++){
		printf("%d ", A[i]);
	}
}

int selection_desc(int A[]){
	printf("\n");
	int indeks_min, i, j, x;
	
	for(j=0; j<5; j++){
		indeks_min = j;
		for(i=j+1; i<5; i++){
			if(A[i] > A[indeks_min]){
				indeks_min = i;
			}
		}
		x = A[indeks_min];
		A[indeks_min] = A[j];
		A[j] = x;
	}
	
	printf("Data setelah diurutkan = ");
	for(i=0; i<5; i++){
		printf("%d ", A[i]);
	}
}

int main() {
	int A[5] = {9, 1, 10, 12, 3};
	int i, temp;
	
	printf("Data : ");
	for(i=0; i<5; i++){
		printf("%d ", A[i]);
	}
	selection_asc(A);
	selection_desc(A);
	
	return 0;
}
