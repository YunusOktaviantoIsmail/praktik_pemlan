#include <stdio.h>
#include <conio.h>

int main() {
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3){
		int npm[5] = {101,102,103,104,105};
		float ipk[5] = {3.45,3.60,3.90,3.85,4.00};
	
		printf("Pilih menggunakan angka\n");
		printf("1. Tampilkan data (a-z) \n2. Tampilkan data (z-a) \n3. Cari data\n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		if(pilih == 1){
			printf("Data Mahasiswa : \n\n");
			for(i = 0; i<5; i++){
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);
			}
			
		} else if (pilih == 2){
			printf("Data Mahasiswa : \n\n");
			for(i = 4 ; i>=0; i--){
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);	
		}	
		
		} else if (pilih == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(cari == npm[i]){
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
				} 
			}
			if(cari != npm[i]){
				printf("Data Tidak Ditemukan\n\n");
			}
						
		} else {
			printf("Inputan Salah");
	}
	system("pause");
	system("cls");
	}
	return 0;
}
