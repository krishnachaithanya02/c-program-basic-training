#include <stdio.h>
int main()
{
int x,y=0;
for(x=6;x>=1;x--)
{
y=x+y;
}
printf("%d",y);
return 0;
}
