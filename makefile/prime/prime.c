#include "prime.h"
int prime(int n)
{
int i;
if(n<=1)
return 0;
for(i=2;i<=n-1;i++)
{
if(n%i==0)
return 0;
}
return 1;
}
