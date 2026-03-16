#include <stdio.h>
int main() {
int a[10], i, sum = 0,avg;
printf("Enter 10 integers:\n");
for(i = 0; i < 10; i++) {
scanf("%d", &a[i]);
sum = sum + a[i];
}
avg = sum / 10;
printf("Sum = %d\n", sum);
printf("Average = %d", avg);

return 0;
}
