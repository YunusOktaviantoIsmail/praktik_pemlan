#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,k;
	int data[2][3][3] = {{{5,1,5}, {6,2,8}, {1,2,1}} , {{-3,2,5}, {-4,3,4}, {-5,7,8}}};
						
	for(i=0; i<2; i++) {
		printf("Array %d \n", i+1);
		for(j=0; j<3; j++) {
			for(k=0; k<3; k++) {
				printf(" %d", data[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
