
#include"stdio.h"
int main(){
	float a;
	float b;
	printf("##########Console-output######\n");
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.1f\n",b);
	printf("#############################\n");
	printf("##############################################################"
			"\n##########");

	return 0;
}


