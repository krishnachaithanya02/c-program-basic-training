#include <stdio.h>
int main()
{
int x,rev=0,i;
printf("enter a number:");
scanf("%d",&x);
for(i=x;i!=0;i=i/10)
{
rev=rev*10+(i%10);
}
printf("reversed number=%d",rev);
return 0;
}
