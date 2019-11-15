#include <stdio.h>
#include <stdlib.h>

int pengurutan(int A[]) {
	int a, i, j, urut;
	
	// Pengurutan Data
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if(A[j] > A[j+1]){
				urut = A[j];
				A[j] = A[j+1];
				A[j+1] = urut;
			}
		}
	}
	
	printf("Data setelah diurutkan : ");
	
	for(a=0; a<8; a++){
		printf("%d ", A[a]);
	}
}

int search_sequential(int search, int A[]){
	int i;
	for(i=0; i<8; i++){
		if(search == A[i]){
			printf("Data Ditemukan");
			break;
		}
	}
	
	if(search != A[i]){
		printf("Data Tidak ditemukan");
	}
	
	return 0;
}

int search_binary(int A[], int awal, int akhir, int search){
	int tengah = (awal + akhir) / 2;
	
	if(awal>akhir){
		return -1;
	} else if(A[tengah] == search){
		return tengah+1;
	} else if(A[tengah] < search){
		return search_binary(A, tengah+1, akhir, search);
	} else {
		return search_binary(A, awal, tengah-1, search);
	}
}

int main() {
	int A[8] = {8,10,6,-2,11,7,100,5};
	int search, result;
	
	pengurutan(A);
	printf("\n\nMasukkan data yang akan dicari : ");
	scanf("%d", &search);
	search_sequential(search, A);
	
	result = search_binary(A, 0, 8, search);
	
	if(result == -1){
        printf("\n\nAngka %d tidak ditemukan \n",search);
    } else {
        printf("\n\nAngka %d ditemukan di urutan ke-%d\n", search, result);
    }
    
	return 0;
}
