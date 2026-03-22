#include <stdio.h>
int main()
{
int x=10,y,z;
loop:
if(x<100)
{
y=x/10;
z=x%10;
if(y+z==6)
{
printf("%d\n",x);
}
x=x+2;
goto loop;
}
else
{
return 0;
}
}
