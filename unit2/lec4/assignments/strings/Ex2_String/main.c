#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fflush(stdout);
    gets(str);

    printf("length of string:%d ",strlen(str));
    return 0;
}

