#include <stdio.h>

void input(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);   
    }
}

int main()
{
    int a[5];

    printf("Enter 5 elements:\n");

    input(a, 5);
    return 0;
}
