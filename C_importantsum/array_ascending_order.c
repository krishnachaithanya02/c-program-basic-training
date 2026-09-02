#include <stdio.h>

void main() {

int arr[5],n,temp,in,out;

printf("enter a n terms");

scanf("%d",&n);

for(out=0;out<n;++out)

 scanf("%d",&arr[out]);

for(out=0;out<=n;++out){

{
for(in=out+1;in<=n;++in){

if(arr[out]>arr[in])
{
temp=arr[out];
arr[out]=arr[in];
arr[in]=temp;
} } }
for(out=0;out<n;++out)
printf("%d",arr[out]);

}
}
