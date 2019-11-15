#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct data_mahasiswa
{
	int npm;
	float ipk;
};
typedef struct data_mahasiswa mhs;

int main(){
	int i, pilih, cari, lanjut;
	while (pilih != 1 || pilih != 2 || pilih != 3){
	mhs data[5];
	data[0].npm = 101;
	data[0].ipk = 3.45;

	data[1].npm = 102;
	data[1].ipk = 3.60;
	
	data[2].npm = 103;
	data[2].ipk = 3.90;
	
	data[3].npm = 104;
	data[3].ipk = 3.85;
	
	data[4].npm = 105;
	data[4].ipk = 4.00;
	
	
		printf("Pilih menggunakan angka\n");
		printf("1. Tampilkan data (a-z) \n2. Tampilkan data (z-a) \n3. Cari data\n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		if(pilih == 1){
			printf("Data Mahasiswa : \n\n");
			for(i = 0; i<5; i++){
				printf("Npm : %d\n", data[i].npm);
				printf("ipk : %f\n\n", data[i].ipk);
			}
			
		} else if (pilih == 2){
			printf("Data Mahasiswa : \n\n");
			for(i = 4 ; i>=0; i--){
				printf("Npm : %d\n", data[i].npm);
				printf("ipk : %f\n\n", data[i].ipk);	
		}	
		
		} else if (pilih == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(data[i].npm == cari){
					printf("Npm : %d\n", data[i].npm);
					printf("ipk : %f\n\n", data[i].ipk);
					break;
				}
			}
			if(data[i].npm != cari){
				printf("Data tidak ditemukan\n\n");
			}
					
		} else {
			printf("Inputan anda salah\n");
			
	}
	system("pause");
	system("cls");
	}
	return 0;
}

