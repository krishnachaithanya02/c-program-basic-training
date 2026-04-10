#include <stdio.h>
void updatevalue();

int main()  
{
int x=256;
printf("%d",x);

updatevalue(&x);
printf("after: %d\n",x);

return 0;
}

void updatevalue(int *a)
{
*a=50;
}
