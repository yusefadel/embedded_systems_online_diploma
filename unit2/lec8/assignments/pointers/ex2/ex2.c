#include <stdio.h>
int main(){
char alpha='A';
char* p = &alpha;
int i =0 ;
for(i=0;i<26;i++){
	printf("%c ",*p);
	*p=*p+1;
}
return 0;
}






