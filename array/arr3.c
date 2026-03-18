#include <stdio.h>
int main(){
int x[100],n,i,temp;
printf("enter a number:");
scanf(" %d",&n);
printf("enter a numbers:\n");
for(i=0;i<n;i++){
scanf(" %d",&x[i]);
}
for(i=0;i<n/2;i++){
temp=x[i];
x[i]=x[n-i-1];
x[n-i-1]=temp;
}
printf("reversed arrary:\n");
for(i=0;i<n;i++){
printf(" %d",x[i]);
}
return 0;

}
