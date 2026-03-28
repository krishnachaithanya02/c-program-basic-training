#include <stdio.h>
int sum(int n)
{
int s=0;
int d;
while(n>0)
{
d=n%10;
s=s+d;
n=n/10;
}
return s;
}
int main()
{
int result;
result= sum(123);
printf("sum =%d",result);
return 0;
}
