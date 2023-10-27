#include"stdio.h"
#include <math.h>
int main() {

const int  z;
printf("Enter no of elements: ");
fflush(stdout);
scanf("%d",&z);

int Matrix[z];
int i;

printf("Enter elements of matrix: ");
for(i=0;i<z;i++){

		fflush(stdout),fflush(stdin);
		scanf("%d",&Matrix[i]);
}
int E,loc;
printf("Enter the element to be inserted : ");
fflush(stdout);
scanf("%d",&E);
printf("Enter the location : ");
fflush(stdout);
scanf("%d",&loc);
--loc;

for(i=0;i<z;i++){
	if(i==loc){
		printf("%d ",E);
	}
				printf("%d ",Matrix[i]);
}

return 0 ;
}


