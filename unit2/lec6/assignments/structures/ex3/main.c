#include <stdio.h>
#include <math.h>

struct  Simaginary{
	float real;
	float imaginary;
};

void sumImaginary(struct Simaginary x,struct Simaginary y);
int main() {
printf("Enter real and imaginary respectively 1st: \n");
struct Simaginary opj1;
fflush(stdout);
scanf("%f",&opj1.real);
fflush(stdout);
scanf("%f",&opj1.imaginary);
printf("Enter real and imaginary respectively 2nd: \n");
struct Simaginary opj2;
printf("Enter feet: ");
fflush(stdout);
scanf("%f",&opj2.real);
printf("Enter inches: ");
fflush(stdout);
scanf("%f",&opj2.imaginary);
sumImaginary(opj1,opj2);

    return 0;
}
void sumImaginary(struct Simaginary x,struct Simaginary y){
	float sumReal=x.real+y.real;
	float sumI=x.imaginary+y.imaginary;
	printf("Sum=%.1f+%.1fi",sumReal,sumI);
}
