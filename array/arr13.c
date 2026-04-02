#include <stdio.h>
int main()
{
int arr[5],odd[5];
int i,j=0;
printf("enter 5 numbers:\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
if(arr[i]%2!=0)
{
odd[j]=arr[i];
j++;
   }
         }
printf("odd numbers are:\n");
for(i=0;i<j;i++)
{
printf("%d ",odd[i]);
}
return 0;
}

