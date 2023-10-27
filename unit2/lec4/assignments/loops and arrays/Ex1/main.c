#include"stdio.h"
#include <math.h>
int main() {
float first[2][2];
float second[2][2];
int i,j;
printf("Enter the elements of 1st matrix\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("Enter a%d%d: ",i+1,j+1);
		fflush(stdout),fflush(stdin);
		scanf("%f",&first[i][j]);

	}

}
printf("Enter the elements of 2nd matrix\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("Enter a%d%d: ",i+1,j+1);
		fflush(stdout),fflush(stdin);
		scanf("%f",&second[i][j]);

	}

}

printf("Sum of Matrix:\n");
float sum;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		sum=first[i][j]+second[i][j];
		printf("%.1f\t",sum);

	}
	printf("\n");

}



return 0 ;
}


