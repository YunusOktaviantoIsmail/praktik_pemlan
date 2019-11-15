#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i,j,k;
	int z,x,y;
	int jarak_sementara, jarak_total;
	float temp, tampung_ac, tampung_ce, tampung_eg;
	
	int data[3][3][3] = {
							{{5,1,5}, {6,2,8}, {1,2,1}} ,  // A-B-C 
							{{-3,2,5}, {-4,3,4}, {-5,7,8}},  // C-D-E
							{{-1,-2,-5}, {-5,-3,-6}, {-7,-5,-4}}  //E-F-G
						};
						
	for(i=0; i<3; i++) {
		printf("=================================================\n");
		printf("|\t\t      Array %d    \t\t| \n", i+1);
		printf("=================================================\n");
		for(j=0; j<3; j++) {
			for(k=0; k<3; k++) {
				printf("|\t%d\t|", data[i][j][k]);
			}
			printf("\n");
		}
		printf("=================================================\n");
		printf("\n");	
	}
	
	printf("\n");
	printf("======================== HASIL EKSEKUSI =========================\n\n");
	
	z=0;
	while(z != 3){
		printf("=================================================================\n");
		printf("|\tX\t||\tY\t||\tZ\t||\tHasil\t|\n");
		printf("=================================================================\n");
		for(x=0; x<2; x++){
			jarak_total=0;
			for(y=0; y<3; y++){
				jarak_sementara = pow((data[z][x+1][y]-data[z][x][y]),2);
				jarak_total += jarak_sementara;
				temp = sqrt(jarak_total);
				printf("|\t%d\t|", jarak_sementara);
			}
		tampung_ac += temp;
		printf("|    %f  |\n", temp);
		}
		printf("=================================================================\n");
		printf("\t\tJarak Total  \t\t\t||  %f   |\n", tampung_ac);
		printf("=================================================================\n\n");
		tampung_ac=0;
		z++;
	}
	
	// UNTUK A-B-C
	/*for(z=0; z<1; z++){
		for(x=0; x<2;x++){
			jarak_total=0;
			for(y=0; y<3; y++){
				jarak_sementara = pow((data[z][x+1][y]-data[z][x][y]),2);
				jarak_total += jarak_sementara;
				temp = sqrt(jarak_total);
				printf("%d ", jarak_sementara);
			}
		tampung_ac += temp;
		printf(" = %f", temp);
		printf("\n");
		}	
	}
	printf("Jarak A ke C adalah %f\n", tampung_ac);
	printf("\n");
	
	// UNTUK C-D-E
	for(z=1; z<2; z++){
		for(x=0; x<2;x++){
			jarak_total=0;
			for(y=0; y<3; y++){
				jarak_sementara = pow((data[z][x+1][y]-data[z][x][y]),2);
				jarak_total += jarak_sementara;
				temp = sqrt(jarak_total);
				printf("%d ", jarak_sementara);
			}
		tampung_ce += temp;
		printf(" = %f", temp);
		printf("\n");
		}	
	}
	printf("Jarak C ke E adalah %f\n", tampung_ce);
	printf("\n");
	
	//UNTUK E-F-G
	for(z=2; z<3; z++){
		for(x=0; x<2;x++){
			jarak_total=0;
			for(y=0; y<3; y++){
				jarak_sementara = pow((data[z][x+1][y]-data[z][x][y]),2);
				jarak_total += jarak_sementara;
				temp = sqrt(jarak_total);
				printf("%d ", jarak_sementara);
			}
		tampung_eg += temp;
		printf(" = %f", temp);
		printf("\n");
		}
	}
	printf("Jarak E ke G adalah %f\n", tampung_eg);
	printf("\n");*/
	
	return 0;
}

