#include <stdio.h>
#include <stdlib.h>

int main() {
	int kode[8] = {20, 34, 41, 56, 63, 72, 73, 76};
	int i, posisi, kunci, low, high;
	
	printf("Data : ");
	for(i=0; i<8; i++){
		printf("%d ", kode[i]);
	}
	printf("\nMasukkan Kode : ");
	scanf("%d", &kunci);
	
	low = 0;
	high = 7;
	
	do {
		posisi = (kunci - kode[low]) / (kode[low] - kode[high]) * (high-low) + low;
		
		if(kode[posisi] == kunci){
			printf("\nData %d ditemukan", kunci);
			break;
		} else if(kode[posisi] > kunci) {
			high = posisi - 1;
		} else if(kode[posisi] < kunci) {
			low = posisi + 1;
		}
	} while (kunci >= kode[low] && kunci <= kode[high]);
	
	if(kode[posisi] < kunci){
		printf("\nTidak ada");
	} else if(kode[posisi] > kunci){
		printf("\nTidak ada");
	}
	
	return 0;
}
