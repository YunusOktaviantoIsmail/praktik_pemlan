#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nama_matkul {
	char nama_matkul[50];
};

struct mahasiswa {
	char nama[100];
	int npm;
	struct nama_matkul nama_matkul;
};
typedef struct mahasiswa mhs;

float konversi_nilai(float nilai){
	if (nilai == 'A'){
		return 4;
	} else if (nilai == 'A'){
		return 3;
	} else if (nilai == 'B'){
		return 2;
	} else if (nilai == 'D'){
		return 1;
	}
}

int main() {
	
	float total_sementara, temp;
	int x,y,z;
	float ipk[5];
	float total_sks;
	
	mhs mahasiswa[5];
	
	strcpy(mahasiswa[0].nama,"Budi Cahyono");
	mahasiswa[0].npm = 100;
	
	strcpy(mahasiswa[1].nama,"Tegar Sudrajat");
	mahasiswa[1].npm = 101;
	
	strcpy(mahasiswa[2].nama,"Teguh Saputra");
	mahasiswa[2].npm = 102;
	
	strcpy(mahasiswa[3].nama,"Ishak Nurjayanto");
	mahasiswa[3].npm = 103;
	
	strcpy(mahasiswa[4].nama,"Indira Aulia");
	mahasiswa[4].npm = 104;
	
	strcpy(mahasiswa[0].nama_matkul.nama_matkul,"Pemrograman Lanjut");
	strcpy(mahasiswa[1].nama_matkul.nama_matkul,"Sistem Operasi");
	strcpy(mahasiswa[2].nama_matkul.nama_matkul,"Statistik Komputasi");
	strcpy(mahasiswa[3].nama_matkul.nama_matkul,"Bela Negara");
	strcpy(mahasiswa[4].nama_matkul.nama_matkul,"Kewirausahaan");
	
	
	int sks[5] = {4,2,3,3,2};
	char nilai[5][5] = { 	{'A', 'A', 'A', 'B', 'B'}, 
							{'B', 'B', 'C', 'D', 'A'}, 
							{'B', 'A', 'A', 'B', 'A'}, 
							{'A', 'A', 'A', 'A', 'A'}, 
							{'B', 'B', 'B', 'A', 'A'} 
						};
	
	for(y=0; y<=4; y++){
		total_sementara = 0;
		temp = 0;
		total_sks = 0;
		
		printf("\n================================== DATA MAHASISWA =====================================\n");
		printf("\nNama 	: %s\n", mahasiswa[y].nama);
		printf("NPM 	: %d\n\n", mahasiswa[y].npm);
		printf("================================= TRANSKRIP MAHASISWA =================================\n\n");
		
		for(z=0; z<=4; z++){
			printf("Nama Mata kuliah 	= %s (%d sks)\n", mahasiswa[z].nama_matkul.nama_matkul, sks[z]);
			printf("Nilai 			= %c\n", nilai[y][z]);
			printf("Nilai Konversi 		= %.2f\n", konversi_nilai(nilai[y][z]));
		}
		
		for(x=0; x<=4; x++){
			total_sks += sks[x];
			total_sementara += (konversi_nilai(nilai[y][x]) * sks[x]);
			temp = total_sementara / total_sks;
			ipk[y] = temp;
		}
		printf("IPK 			= %f\n", ipk[y]);
		printf("\n=======================================================================================\n");
		
	}
	
	return 0;
}
