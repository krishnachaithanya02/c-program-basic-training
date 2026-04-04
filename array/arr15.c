#include <stdio.h>

int main()
{
    int arr[5], newArr[5];
    int i, n, rev, rem, sum = 0;

    
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < 5; i++)
    {
        n = arr[i];
        rev = 0;

        while(n > 0)
        {
            rem = n % 10;        
            rev = rev * 10 + rem; 
            n = n / 10;         
        }

        newArr[i] = rev;
        sum = sum + rev;
    }

    
    printf("Reversed numbers:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", newArr[i]);
    }


    printf("\nSum = %d", sum);

    return 0;
}
