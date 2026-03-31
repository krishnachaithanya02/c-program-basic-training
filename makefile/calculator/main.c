#include <stdio.h>
#include "calcul.h"

int main()
{
    int a, b, choice;
    float res;

    printf("Enter two numbers\n: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %d", add(a,b));
            break;
        case 2:
            printf("Result = %d", sub(a,b));
            break;
        case 3:
            printf("Result = %d", mul(a,b));
            break;
        case 4:
            res = div(a,b);
            printf("Result = %.4f", res);
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
