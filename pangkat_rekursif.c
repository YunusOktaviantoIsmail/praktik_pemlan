#include <stdio.h>
#include <math.h>

// NAMA : YUNUS OKTAVIANTO ISMAIL
// NPM : 18081010022

// Fungsi Rekursif pangkat
float pangkatRekursif(float a, float b){
	float rekursif;
	if (b == 1){ 
		return a;
	} else if (b < 1) {
		return a;
	} else {
		rekursif = a*pangkatRekursif(a,b-1);
		return rekursif;
	}
}

int main() {
	
	float a, b, akhir, hasil, pangkatNegatif;
	printf("Masukkan angka : ");
	scanf("%f", &a);
	printf("Masukkan pangkat : ");
	scanf("%f", &b);

	if (b>0){
		//hasil = pangkatRekursif(a,b);
		printf("Hasil pangkat rekursif = %f ", pangkatRekursif(a,b));
	} else if (b<0){
		pangkatNegatif = b * (-1);
		hasil = pangkatRekursif(a,pangkatNegatif);
		printf("Hasil pangkat rekursif = %f ", 1/hasil);
	} else if (a != 0 && b == 0){
		printf("Hasil pangkat rekursif = %f ", hasil = 1);
	}
	printf("\n");
	system("pause");
	return 0;
}
