#include <stdio.h>
int main() {
int x=256;
int *ptr = NULL;
ptr=&x;

printf("x value:  %d\n",x);
printf("x address: %p\n",&x);
printf("p address: %p\n",ptr);
printf("p value %d\n",*ptr);

return 0;

}
