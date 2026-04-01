#include <stdio.h>

int digits_count(int n) {
    int count = 0;

    if (n == 0) {
        return 1;
}
    while (n != 0) {
        n = n / 10;
        count++;
    }

    return count;
}

int main() {
    int number, result;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    result = digits_count(number);

    printf("The total number of digits is: %d\n", result);

    return 0;
}
