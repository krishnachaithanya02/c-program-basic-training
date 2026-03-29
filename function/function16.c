#include <stdio.h>

void print(int a[], int n)
{
    int i;

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    print(a, 5);

    return 0;
}
