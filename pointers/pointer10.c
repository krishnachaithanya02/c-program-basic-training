#include <stdio.h>
int max();

int main()
  {

int arr[]={5,6,7,8,9};

int res=max(arr,5);
printf("max=%d",res);

return 0;
}

int max(int *p, int s)
{
int max= *p;

for(int i=0;i<s; i++)
{
if(*p>max)
{
max=*p;

p++;
}
return max;
}
}

