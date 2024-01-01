/*
 * main.c
 *
 *  Created on: Dec 30, 2023
 *      Author: yusefadel
 */

#include <stdio.h>
#include <math.h>
int factorial(int x);
int main() {
int num;
printf("Enter a positive integer: ");
fflush(stdout);
scanf("%d",&num);
int result;
result=factorial(num);
printf("Factorial of %d = %d",num,result);
}

int factorial(int x){
	int y=x-1;
	if(x==1){
		return 1;

	}
	return x*factorial(y);
}

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
ex2.c [unix] (17:41 01/01/2024)                                                                         0,0-1 All
"ex2.c" 0L, 0B

