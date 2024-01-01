/*
 * main.c
 *
 *  Created on: Dec 30, 2023
 *      Author: yusefadel
 */

#include <stdio.h>
#include <math.h>
void prime(int x,int y);
int main() {
int x;
int y;
printf("Enter two numbers(intervals): ");
fflush(stdout);
scanf("%d",&x);
fflush(stdout);
scanf("%d",&y);
prime(x,y);
}
void prime(int x, int y){
	int i=x;
	int flag=1;
	int counter =2;
	printf("Prime numbers between %d and %d are: ",x,y);
	for(;i<y;i++){
		counter=2;
		int numsq=sqrt(i);
		if(i==2){
			printf("%d ",i);
			continue;
		}
		if(i==3){
			printf("%d ",i);
			continue;

				}
		for (;counter<=numsq;counter++){

			if(i%counter == 0)
			{		flag=0;
					break;
			}
		}
		if(flag==1 && i>1){
			printf("%d ",i);

		}
		else{
			flag=1;
		}


	}




}


