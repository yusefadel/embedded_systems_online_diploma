
#include"stdio.h"
int main(){
	float x;
	float y;
	printf("##########Console-output###\n\n");
	printf("###########################\n");
	printf("Enter two integers: \n");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdout);
	scanf("%f",&y);

	printf("Sum: %f\n",x*y);
	printf("##############################################################"
			"\n##########");

	return 0;
}


