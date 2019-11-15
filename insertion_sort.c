#include <stdio.h>
#include <stdlib.h>

int insert_asc(int data[]){
	printf("\n");
	int i, j, temp;
	for(i=0; i<5; i++){
		for(j=i; j>0; j--){
			if(data[j] > data[j-1]){
				temp = data[j-1];
				data[j-1] = data[j];
				data[j] = temp;
			}
		}
	}
	
	printf("Urut (Ascending) 	: ");
	for(i=0; i<5; i++){
		printf("%d ", data[i]);
	}
}

int insert_desc(int data[]){
	printf("\n");
	int i, j, temp;
	for(i=0; i<5; i++){
		for(j=i; j>0; j--){
			if(data[j] < data[j-1]){
				temp = data[j-1];
				data[j-1] = data[j];
				data[j] = temp;
			}
		}
	}
	
	printf("Urut (Descending) 	: ");
	for(i=0; i<5; i++){
		printf("%d ", data[i]);
	}
}


int main() {
	int i;
	int data[5] = {6, 3, 10, 12, 9};
	
	printf("Data 			: ");
	for(i=0; i<5; i++){
		printf("%d ", data[i]);
	}
	
	insert_asc(data);
	insert_desc(data);
	return 0;
}
