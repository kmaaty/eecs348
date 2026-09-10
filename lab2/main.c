#include <stdio.h>
#include "isOdd.h"

int main(void)
{
    int num;

    printf("Enter an integer: ");

    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "Error: please enter a valid integer.\n");
        return 1;
    }

    isOdd(num);

    return 0;
}