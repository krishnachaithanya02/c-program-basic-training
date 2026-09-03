#include <stdio.h>

int main() {
    int x;
    int *y;
    printf("Enter a number: ");
    scanf("%d",&x);

printf("original value %d\n",x);


y=&x;
*y=45;




printf(" modified value %d",x);

return 0;
}

