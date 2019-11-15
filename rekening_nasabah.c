#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct alamat {
	char nama_jalan[50];
	char nama_kota[50];
	char nama_provinsi[50];
};

struct ttl{
	int tanggal;
	char bulan[20];
	int tahun;
};

struct rekening {
	char nama[100];
	int no_rek;
	char nama_bank[10];
	int saldo;
	struct alamat alamat;
	struct ttl ttl;
};
typedef struct rekening rek;

int main() {
	int pilih, i, data_nama_rek;
	
	rek data[5];
		
	//Nasabah 1
	strcpy(data[0].nama,"Yunus Oktavianto Ismail");
	data[0].no_rek = 100;
	strcpy(data[0].nama_bank,"BRI");
	data[0].saldo = 1000000;
	strcpy(data[0].alamat.nama_jalan,"Jl. Jambangan 1A No. 15");
	strcpy(data[0].alamat.nama_kota,"Surabaya");
	strcpy(data[0].alamat.nama_provinsi,"Jawa Timur");
	data[0].ttl.tanggal = 7;
	strcpy(data[0].ttl.bulan,"Oktober");
	data[0].ttl.tahun = 1999;
	
	//Nasabah 2
	strcpy(data[1].nama,"Rudi Habibie");
	data[1].no_rek = 101;
	strcpy(data[1].nama_bank,"BCA");
	data[1].saldo = 750000;
	strcpy(data[1].alamat.nama_jalan,"Jl. Karah No. 17");
	strcpy(data[1].alamat.nama_kota,"Madiun");
	strcpy(data[1].alamat.nama_provinsi,"Jawa Timur");
	data[1].ttl.tanggal = 9;
	strcpy(data[1].ttl.bulan,"Januari");
	data[1].ttl.tahun = 2000;
	
	//Nasabah 3
	strcpy(data[2].nama,"Angga Setiawan");
	data[2].no_rek = 102;
	strcpy(data[2].nama_bank,"Mandiri");
	data[2].saldo = 500000;
	strcpy(data[2].alamat.nama_jalan,"Jl. Ketintang No. 20");
	strcpy(data[2].alamat.nama_kota,"Jombang");
	strcpy(data[2].alamat.nama_provinsi,"Jawa Timur");
	data[2].ttl.tanggal = 20;
	strcpy(data[2].ttl.bulan,"Mei");
	data[2].ttl.tahun = 2001;
	
	//Nasabah 4
	strcpy(data[3].nama,"Faishal Yudis");
	data[3].no_rek = 103;
	strcpy(data[3].nama_bank,"BTN");
	data[3].saldo = 3500000;
	strcpy(data[3].alamat.nama_jalan,"Jl. Praban No. 114");
	strcpy(data[3].alamat.nama_kota,"Sidoarjo");
	strcpy(data[3].alamat.nama_provinsi,"Jawa Timur");
	data[3].ttl.tanggal = 25;
	strcpy(data[3].ttl.bulan,"Maret");
	data[3].ttl.tahun = 1995;
	
	//Nasabah 5
	strcpy(data[4].nama,"Adisti Yulia");
	data[4].no_rek = 104;
	strcpy(data[4].nama_bank,"CIMB Niaga");
	data[4].saldo = 1500000;
	strcpy(data[4].alamat.nama_jalan,"Jl. Diponegoro No. 50A");
	strcpy(data[4].alamat.nama_kota,"Kediri");
	strcpy(data[4].alamat.nama_provinsi,"Jawa Timur");
	data[4].ttl.tanggal = 30;
	strcpy(data[4].ttl.bulan,"November");
	data[4].ttl.tahun = 1985;
		
	do {
	printf("---------------- Program Data Rekening Nasabah ----------------\n\n");
	printf("1. Tampilkan seluruh data Nasabah\n");
	printf("2. Cari data berdasarkan Nomor Rekening\n");
	printf("3. Akumulasi saldo nasabah\n");
	printf("4. Cari data berdasarkan Kota\n");
	printf("5. Tampilkan nasabah dengan umur tertentu\n");
	printf("6. Tampilkan nasabah dengan saldo terbesar / terkecil\n");
	printf("\n(Pilih menggunakan angka)");
	printf("\nSilahkan pilih : ");
	scanf("%d", &pilih);
	
	if(pilih == 1){
		printf("\n---------------- Data Nasabah ----------------\n\n");
		for(i=0; i<5; i++){
			printf("Nama Nasabah 	: %s\n", data[i].nama);
			printf("No. Rekening 	: %d\n", data[i].no_rek);
			printf("Nama Bank 	: %s\n", data[i].nama_bank);
			printf("Saldo 		: %d\n", data[i].saldo);
			printf("Alamat 		: %s, %s, %s\n", data[i].alamat.nama_jalan, data[i].alamat.nama_kota, data[i].alamat.nama_provinsi);
			printf("Tanggal Lahir 	: %d %s %d\n\n", data[i].ttl.tanggal, data[i].ttl.bulan, data[i].ttl.tahun);
		}
		
	} else if(pilih == 2){
		int rekening;
		printf("Masukkan nomor rekening : ");
		scanf("%d", &rekening);
		printf("\n---------------- Hasil Pencarian ----------------\n\n");
		for(i=0; i<5; i++){
			if(rekening == data[i].no_rek){
				printf("Nama Nasabah 	: %s\n", data[i].nama);
				printf("No. Rekening 	: %d\n", data[i].no_rek);
				printf("Nama Bank 	: %s\n", data[i].nama_bank);
				printf("Saldo 		: %d\n", data[i].saldo);
				printf("Alamat 		: %s, %s, %s\n", data[i].alamat.nama_jalan, data[i].alamat.nama_kota, data[i].alamat.nama_provinsi);
				printf("Tanggal Lahir 	: %d %s %d\n\n", data[i].ttl.tanggal, data[i].ttl.bulan, data[i].ttl.tahun);
				break;
			}
		} if(rekening != data[i].no_rek){
			printf("Data tidak ditemukan\n");
		}
		
	} else if(pilih == 3){
		int hasil_akumulasi=0;
		printf("\n---------------- Akumulasi Saldo Nasabah ----------------\n\n");
		for(i=0; i<5; i++){
			printf("Nasabah %s 	= %d\n",data[i].nama, data[i].saldo);
			hasil_akumulasi += data[i].saldo;
		}
		printf("\nHasil Total = %d",hasil_akumulasi);
		
	} else if(pilih == 4){
		char city[15],salah=0;
		printf("Masukkan kota yang akan dicari = ");
		scanf("%s",&city);
		printf("\n---------------- Hasil Pencarian Kota ----------------\n\n");
		for(i=0; i<5; i++){
			if(!strcmp(data[i].alamat.nama_kota,city)){				
				printf("Nama Nasabah 	: %s\n", data[i].nama);
				printf("No. Rekening 	: %d\n", data[i].no_rek);
				printf("Nama Bank 	: %s\n", data[i].nama_bank);
				printf("Saldo 		: %d\n", data[i].saldo);
				printf("Alamat 		: %s, %s, %s\n", data[i].alamat.nama_jalan, data[i].alamat.nama_kota, data[i].alamat.nama_provinsi);
				printf("Tanggal Lahir 	: %d %s %d\n\n", data[i].ttl.tanggal, data[i].ttl.bulan, data[i].ttl.tahun);
				salah=1;
				break;
			}
		} if(salah == 0){
			printf("Maaf Nasabah dengan Kota %s tidak di temukan\n", city);		
		}
		
	} else if(pilih == 5){
		int age,usia_ketemu,salah=0;
		printf("Masukkan umur yang dicari = ");
		scanf("%d",&age);
		printf("\n---------------- Hasil Pencarian Umur ----------------\n\n");
		for(i=0; i<5; i++){
			usia_ketemu = 2019-age;
			if(usia_ketemu == data[i].ttl.tahun){				
				printf("Nama Nasabah 	: %s\n", data[i].nama);
				printf("No. Rekening 	: %d\n", data[i].no_rek);
				printf("Nama Bank 	: %s\n", data[i].nama_bank);
				printf("Saldo 		: %d\n", data[i].saldo);
				printf("Alamat 		: %s, %s, %s\n", data[i].alamat.nama_jalan, data[i].alamat.nama_kota, data[i].alamat.nama_provinsi);
				printf("Tanggal Lahir 	: %d %s %d\n\n", data[i].ttl.tanggal, data[i].ttl.bulan, data[i].ttl.tahun);
				salah=1;
				break;
			}
		} if(salah == 0){
			printf("Maaf Nasabah dengan umur %d tidak di temukan\n", age);		
		}
	} else if(pilih == 6){
		printf("\n---------------- Saldo Terbesar dan Saldo Terkecil ----------------\n\n");
		int minim=0, maksimal=0, rekening_minim, rekening_maks;
		for(i=0; i<5; i++){
			if(data[i].saldo < minim || minim==0){
				minim = data[i].saldo;
				rekening_minim = data[i].no_rek;
			} else if(data[i].saldo > maksimal || maksimal==0){
				maksimal = data[i].saldo;
				rekening_maks = data[i].no_rek;
			}
		}
		printf("Nomor Rekening : %d\n", rekening_maks);
		printf("Saldo terbesar = %d\n\n", maksimal);
		printf("Nomor Rekening : %d\n", rekening_minim);
		printf("Saldo terkecil = %d\n", minim);
	} else {
		printf("\nPilihan tidak tersedia\n\n");
	}	
	} while (pilih > 6);
	
	return 0;
}
