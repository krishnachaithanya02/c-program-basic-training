#include <stdio.h>

void increment(int *x)   
{
    (*x)++;   
}

int main()
{
    int num = 10;

    printf("Before: %d\n", num);

    increment(&num);

    printf("After: %d\n", num);

    return 0;
}
