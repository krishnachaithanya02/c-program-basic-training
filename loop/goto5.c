#include <stdio.h>
int main(){
int x=11;
int y,z;
loop:
if(x<=99)
{
y=x/10;
z=x%10;

if(y+z==7)
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
