#include"stdio.h"
#include <math.h>
int main() {

const int  z;
printf("Enter the numbers of data: ");
fflush(stdout);
scanf("%d",&z);
float first[z];
int i;
float Avg;

for(i=0;i<z;i++){
		printf("Enter the numbers: ");
		fflush(stdout),fflush(stdin);
		scanf("%f",&first[i]);
		Avg+=first[i];
}
printf("Average = %.2f",Avg/z);

return 0 ;
}


