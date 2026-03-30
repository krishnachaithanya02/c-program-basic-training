#include <stdio.h>
void reverse(int a[],int n)
{
int i, temp;
for(i=0;i<n/2;i++)
{
temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;
}
}
int main()
int a[5],i;
printf("enter a numbers");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
reverse(a,5);
printf("reversed array:");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
return 0;

