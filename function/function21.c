#include <stdio.h>
void sort(int arr[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
}

int main()
{
int arr[5],i;
printf("enter 5 numbers:\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
sort(arr,5);
printf("sorted array:\n");
for(i=0;i<5;i++)
{
printf("%d",arr[i]);
}
return 0;
}

