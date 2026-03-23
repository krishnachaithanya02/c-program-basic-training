#include <stdio.h>
int main()
{
int x,y=0;
for(x=11;x<=99;x=x+2)
{
if(x/10==7)
{
y=y+x;
}
}
printf("%d",y);
return 0;
}
