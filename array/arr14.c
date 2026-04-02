#include <stdio.h>
int main()
{
    int arr[5], nonPrime[5];
    int i, j = 0, k, isPrime;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] <= 1)
        {
            isPrime = 0;
        }
        else
        {
            isPrime = 1;
            for(k = 2; k <= arr[i]/2; k++)
            {
                if(arr[i] % k == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime == 0)
        {
            nonPrime[j] = arr[i];
            j++;
        }
    }

    printf("Non-prime numbers are:\n");

    for(i = 0; i < j; i++)
    {
        printf("%d ", nonPrime[i]);
    }

    return 0;
}
