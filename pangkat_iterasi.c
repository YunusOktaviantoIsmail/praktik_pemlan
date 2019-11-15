#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	int a, b, hs, g;
	float hasil;
	printf("Masukkan angka : ");
	scanf("%d", &a);
	printf("Masukkan pangkat : ");
	scanf("%d", &b);
	if(b>0){
		for(int i = 1; i <= b; i++){
			hasil = hasil * a;
		}
	    printf("Hasil %d pangkat (%d) = %f",a,b,hasil);
	} else {				
		 b = b * (-1);
		for (int i=1;i<=b;i++){
			hasil = hasil * a;
		}
	    printf("Hasil %d pangkat (%d) = %f",a,-b,1/(hasil));
	} 
	printf("\n");
	system("pause");
	return 0;
}
