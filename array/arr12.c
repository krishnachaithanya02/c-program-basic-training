#include <stdio.h>
int main()
{
    int arr[5], even[5];
    int i, j = 0;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
    }
    printf("Even numbers are:\n");
    for(i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }

 return 0;
}
