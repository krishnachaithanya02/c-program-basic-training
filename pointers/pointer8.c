#include <stdio.h>


void divide(int a, int b, int *q, int *r)
{
    if (b != 0)  
   {
        *q = a / b;
        *r = a % b;
    }
    else
    {
        printf(" Division by zero not allowed\n");
    }
}

int main(void)
{
    int x1, x2;
    int quotient = 0, remainder = 0;

   
    printf("Enter first number: ");
    scanf("%d", &x1);

    printf("Enter second number: ");
    scanf("%d", &x2);

    divide(x1, x2, &quotient, &remainder);


    printf("Quotient  : %d\n", quotient);
    printf("Remainder : %d\n", remainder);

return 0;
}

