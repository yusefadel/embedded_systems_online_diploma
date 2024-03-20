#include <stdio.h>
#include <math.h>

struct  Sdistance{
	int feet;
	float inches;
};

float sumD(struct Sdistance x,struct Sdistance y);
int main() {
printf("Enter information for 1st distance : \n");
struct Sdistance opj1;
printf("Enter feet: ");
fflush(stdout);
scanf("%d",&opj1.feet);
printf("Enter inches: ");
fflush(stdout);
scanf("%f",&opj1.inches);
printf("Enter information for 2nd distance : \n");
struct Sdistance opj2;
printf("Enter feet: ");
fflush(stdout);
scanf("%d",&opj2.feet);
printf("Enter inches: ");
fflush(stdout);
scanf("%f",&opj2.inches);
printf("Sum of distances =%.2f",sumD(opj1,opj2));


    return 0;
}
float sumD(struct Sdistance x,struct Sdistance y){
	float sumf=x.feet+y.feet;
	float sumi=x.inches+y.inches;
	if(sumi>=12){
		sumf++;
		sumi=sumi-12;
	}
	return sumf+sumi;


}

