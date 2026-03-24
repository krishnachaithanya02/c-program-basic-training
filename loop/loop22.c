#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("enter a number:");
scanf("%d",&n);
for(i=n;i>0;i=i/10)
{
sum=sum+(i%10);
}
printf("sum of the digits=%d",sum);
return 0;
}
