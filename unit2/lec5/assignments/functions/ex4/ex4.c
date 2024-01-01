/*
 * main.c
 *
 *  Created on: Dec 30, 2023
 *      Author: yusefadel
 */

#include <stdio.h>
int power(int base,int Power);
int main() {

int base_num;
int power_num;
printf("Enter base number: ");
fflush(stdout);
scanf("%d",&base_num);
printf("Enter power number(positive integer): ");
fflush(stdout);
scanf("%d",&power_num);

int result=power(base_num,power_num-1);
printf("%d^%d = %d",base_num,power_num,result);

}

int power(int base,int Power){

	if(Power>0){
		return base*power(base,--Power);
	}
}


