/*
 * main.c
 *
 *  Created on: Dec 30, 2023
 *      Author: yusefadel
 */

#include <stdio.h>
void reverse(char* str,int length);
int main() {

char str[100];
printf("Enter a sentence: ");
fflush(stdout);
fgets(str, sizeof(str), stdin);
int length=strlen(str)-1;
reverse(str,length);
}
void reverse(char* str, int length) {
    if (length >= 0) {
        printf("%c", str[length]);
        reverse(str, length - 1);
    }
}


