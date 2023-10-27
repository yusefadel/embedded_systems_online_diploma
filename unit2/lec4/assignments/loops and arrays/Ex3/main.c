#include"stdio.h"
#include <math.h>
int main() {

const int  rows;
const int  cols;
printf("Enter rows and column of matrix: ");
fflush(stdout);
scanf("%d",&rows);
fflush(stdout);
scanf("%d",&cols);
int Matrix[rows][cols];
int i,j;

printf("Enter elements of matrix: ");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("Enter elements a%d%d: ",i+1,j+1);
		fflush(stdout),fflush(stdin);
		scanf("%d",&Matrix[i][j]);
	}

}
printf("\nEntered Matrix: \n");

for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("%d ",Matrix[i][j]);

	}
	printf("\n");

}
printf("\nTranspose of Matrix: \n");
for(i=0;i<cols;i++){
	for(j=0;j<rows;j++){
		printf("%d ",Matrix[j][i]);
	}
	printf("\n");

}

return 0 ;
}


