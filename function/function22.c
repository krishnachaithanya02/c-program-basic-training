#include <stdio.h>

int search(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
int arr[5], i, key, result;

printf("Enter 5 numbers:\n");
for(i = 0; i < 5; i++)
scanf("%d", &arr[i]);
  printf("Enter element to search: ");
    scanf("%d", &key);

    result = search(arr, 5, key);

    if(result == -1)
        printf("Not found");
    else
        printf("Found at index %d", result);

    return 0;
}
