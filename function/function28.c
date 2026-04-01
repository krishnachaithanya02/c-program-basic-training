#include <stdio.h>

int digits_sum(int n) {
    int sum = 0;
    

    while (n != 0) 
{
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main() {
    int num, res;

    printf("Enter an integer: ");
    scanf("%d", &num);

    res = digits_sum(num);

    printf("The sum of the digits is: %d\n", res);

    return 0;
}
