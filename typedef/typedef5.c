#include <stdio.h>

typedef int* intptr;

void swap(intptr a, intptr b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Before Swap: x=%d y=%d\n", x, y);

    swap(&x, &y);

    printf("After Swap : x=%d y=%d\n", x, y);

    return 0;
}
