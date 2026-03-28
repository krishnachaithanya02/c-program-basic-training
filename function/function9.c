#include <stdio.h>
int fact(int n)
{
int i,f=1;
for(i=n;i>=1;i--)
{
f=f*i;
}
return f;
}
int main()
{
int y=fact(5);
printf("factorial=%d",y);
return 0;
}
