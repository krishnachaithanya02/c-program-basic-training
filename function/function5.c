#include <stdio.h>
int max(int x,int y)
{
if(x>y)
return x;
else 
return y;
}
int main()
{
int z;
z=max(10,20);
printf("max=%d",z);
return 0;
}
