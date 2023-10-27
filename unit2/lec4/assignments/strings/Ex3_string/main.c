#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i;
    printf("Enter a string: ");
    fflush(stdout);
    gets(str);
    printf("Reverse string is: ");
    for(i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
    }
    return 0;
}

