#include <stdio.h>
int main()
{
int x,count=0,i;
printf("enter a number:");
scanf("%d",&x);
for(i=x;i!=0;i=i/10)
{
count++;
}
printf("number of digits=%d",count);
return 0;
}
