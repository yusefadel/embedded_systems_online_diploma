#include <stdio.h>
#include <math.h>
#define pi 3.14
#define AreaCircle(r) pi*r*r


int main() {
int r;
printf("Enter the raduis : ");
fflush(stdout);
scanf("%d",&r);
printf("Area=%f",AreaCircle(r));


    return 0;
}

