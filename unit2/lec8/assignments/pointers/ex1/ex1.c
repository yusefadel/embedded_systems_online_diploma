#include <stdio.h>
int main(){
int m = 29;
printf("Address of m : %x \n Value of m : %d \n",&m,m);

int* ab=&m;
printf("Now ab is assigned with the address of m.\nAddress of pointer ab : %x \n Content of pointer ab : %d \n",ab,*ab);
m=34;
printf("value of m assigned to 34 now.\n Address of pointer ab : %x \n Content of pointer ab : %d \n",ab,*ab);
*ab=7;
printf("The pointer variable ab is assigned with the value 7 now.\n Address of m : %x \n Value of m : %d \n",&m,m);




	return 0;
}






