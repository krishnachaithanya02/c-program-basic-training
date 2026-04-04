#include <stdio.h>
int disp_sum();
int main()
{
int result;
result=disp_sum();
printf("sum=%d",result);
return 0;
}
int disp_sum()
{
int i,sum=0;
for(i=0;i<=5;i++)
{
sum=sum+i;
}
return sum;
}
