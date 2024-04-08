#include <stdio.h>

int main() {
    int array[15];
    int i = 0;
    int* p = array;

    int num;
    printf("Input the number of elements to store in the array (max 15): ");
    fflush(stdout);
    scanf("%d", &num);

    printf("Input %d number of elements in the array\n", num);

    for (i = 0; i < num; i++) {
    	printf("Element %d: ", i + 1);
		fflush(stdout);
        scanf("%d", &array[i]);
    }

    printf("The elements of the array in reverse order are:\n");

    for (i = num-1 ; i >= 0; i--) {
        printf("Element %d: %d\n", i + 1, *(p + i));
    }

    return 0;
}

