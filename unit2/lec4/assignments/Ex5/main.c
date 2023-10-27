#include"stdio.h"
#include <math.h>
int main() {

const int  z;
printf("Enter no of elements: ");
fflush(stdout);
scanf("%d",&z);

int Matrix[z];
int i;
for(i=0;i<z;i++){

		fflush(stdout),fflush(stdin);
		scanf("%d",&Matrix[i]);
}
int s;
printf("Enter the element to be searched : ");
fflush(stdout);
scanf("%d",&s);
for(i=0;i<z;i++){
	if(Matrix[i]==s){
		printf("Number found at location = %d",i+1);
	}

}

return 0 ;
}


