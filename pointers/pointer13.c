#include <stdio.h>
void reverse();

int main()
{
    int num = 1234;

    printf("Before: %d\n", num);

    reverse(&num);

    printf("After Reverse: %d\n", num);
    return 0;
}
void reverse(int *n)
{
int rev = 0, rem;

while (*n !=0)
{
rem =*n % 10;
rev = rev * 10 + rem;
*n = *n /10;
}
*n =rev;
}
