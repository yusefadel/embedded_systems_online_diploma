#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], c;
    int count = 0, i;

    printf("Enter a string: ");
    fflush(stdout);
    gets(str);

    printf("Enter a character to find its frequency: ");
    fflush(stdout);
    scanf("%c", &c);

    for (i = 0; str[i] != '\0'; ++i) {
        if (c == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", c, count);
    return 0;
}

