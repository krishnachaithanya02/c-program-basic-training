#include <stdio.h>
int main(){
int x[10],n,i,z;
printf("enter a number of elements:");
scanf("%d",&n);
printf("enter a elements:");
for(i=0;i<n;i++){
scanf("%d",&x[i]);
}
printf("enter elements of search:");
scanf("%d",&z);
for(i=0;i<n;i++){
if(x[i]==z){
printf("found a number=%d",i);
return 0;
}
}
printf("element not found");

return 0;
}

