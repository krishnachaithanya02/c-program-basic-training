#include <stdio.h>
int main() {
int x,y,z,sum;
x=10;
while(x<100)
{
if(x%2==0)
{
y=x/10;
z=x%10;
sum=y+z;
if(sum==6)
{
printf("%d\n",x);
}
}
x++;
}
return 0;
}
