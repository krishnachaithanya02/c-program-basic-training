#include <stdio.h>
int main() {
int arr[5];
int x, sum = 0;
for(x = 0; x < 5; x++) {
printf("Enter number %d: ", x + 1);
scanf("%d", &arr[x]);
}
    for(x = 0; x < 5; x++) {
        sum = sum + arr[x];
}
printf("Sum of all numbers = %d", sum);

return 0;
}
