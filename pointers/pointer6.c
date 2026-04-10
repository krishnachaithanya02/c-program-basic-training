#include <stdio.h>
int main() {
 int v=1023;
int *p= &v;
int **pr= &p;

printf("value of %d\n",v);
printf("value of %d\n",*p);

printf("value of %d\n",**pr);

return 0;

}











