#include <stdio.h>
void sumavg(int a[],int n)
{
int i, sum=0;
float avg;
for(i=0;i<n;i++)
{
 sum=sum+a[i];
}
 avg=sum/n;
printf("sum=%d",sum);
printf("average=%.4f",avg);
}
int main()
{
int a[5],i;
printf("enter 5 elements:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
sumavg(a,5);
return 0;
}


