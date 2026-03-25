#include <stdio.h>
int sq(int x)
{
int y=x*x;
return y;
}
int main()
{
int z;
z=sq(5);
printf("sq=%d",z);
return 0;
}
