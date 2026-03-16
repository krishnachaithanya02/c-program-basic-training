#include <stdio.h>
#include "fact.h"

int main()
{
    int x, result;

    printf("Enter a number: ");
    scanf("%d", &x);

    result = factorial(x);

    printf("Factorial = %d\n", result);

    return 0;
}
