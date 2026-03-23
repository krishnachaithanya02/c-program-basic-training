#include <stdio.h>
int main()
{
int x,y=0;
for(x=10;x<=99;x++)
{
if(x%10==5)
{
y=x+y;
}
}
printf("%d",y);
return 0;
}

