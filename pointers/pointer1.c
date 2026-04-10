#include <stdio.h>
int main()  {

int a=10;
int *ptr;
ptr= &a;

printf("value of a:%d\n",a);
printf("address of a:%p\n",&a);
printf("pointer value:%p\n",ptr);


return 0;

}
