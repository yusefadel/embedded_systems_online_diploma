#include <stdio.h>
int main(){
char string[11];
char *p=string;
printf("Input a string : ");
fflush(stdout);
scanf("%s",string);
int i=9;
for(;i>=0;i--){
	printf("%c",*(p+i));
	}

return 0;
}






