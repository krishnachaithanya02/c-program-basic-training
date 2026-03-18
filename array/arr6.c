#include<stdio.h>
int main(){
int arr[5]={5,2,1,7,8};
int x=5;
int i,j,temp;
for(i=0;i<x-1;i++)
{
for(j=0;j<x-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0;i<x;i++)
{
printf("%d",arr[i]);
}
return 0;
}

