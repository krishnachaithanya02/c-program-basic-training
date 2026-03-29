#include <stdio.h>
int max(int a[], int n)
{
    int i, m;

    m = a[0];   

    for(i = 1; i < n; i++)
    {
        if(a[i] > m)
        {
            m = a[i];
        }
    }

    return m;
}

int main()
{
    int a[5], i;

    printf("Enter 5 elements:\n");

    
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Maximum = %d", max(a, 5));

    return 0;
}
