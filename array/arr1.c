#include <stdio.h>
int main() {
int x[10], i, max;
printf("Enter 10 integers:\n");
for(i = 0; i < 10; i++) {
scanf("%d", &x[i]);
}
max = x[0];
for(i = 1; i < 10; i++) {
if(x[i] > max) {
max = x[i];
}
}
printf("Largest number = %d", max);
return 0;
}
