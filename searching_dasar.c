#include <stdio.h>
#include <stdlib.h>

int main() {
	int A[8] = {8,10,6,-2,11,7,100,5};
	int search, i, j, a;
	
	//Pengurutan data
	int urut;
	for(j=0; j<8; j++){
		for(i=7; i>j; i--){
			if(A[j] > A[i]){
				urut = A[i];
                A[i] = A[j];
                A[j] = urut;		
			}
		}
	}
	
	printf("Data setelah diurutkan : ");
	for(a=0; a<8; a++){
		printf("%d ", A[a]);
	}
	
	do{
		//system("cls");
		printf("\n\nMasukkan data yang akan dicari : ");
		scanf("%d", &search);
	
		for(i=0; i<8; i++){
			if(search == A[i]){
				printf("Ada\n\n");
				getch();
				break;
			}
		}
	
		if(search != A[i]){
			printf("Tidak Ada\n\n");
			getch();
		}
	} while(search != 0);
	
	return 0;
}
