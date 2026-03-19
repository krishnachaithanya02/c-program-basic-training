#include <stdio.h>
int main(){
int arr[5]={45,53,78,12,67};
int l = arr[0];
int second=arr[0];
for(int i=0;i<5;i++)
{
if(arr[i]>l)
{
second=l;
l=arr[i];
}
else if(arr[i] > second && arr[i] != l) {
second=arr[i];
}
}
printf("second largest =%d",second);
return 0;
}

