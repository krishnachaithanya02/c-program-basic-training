#include <stdio.h>
#include "fib.h"
int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fib(n);

 return 0;
}
