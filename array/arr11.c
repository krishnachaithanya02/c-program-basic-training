#include <stdio.h>
int main() {
int arr[5];
int x, largest;
for(x=0;x<5;x++){
printf("enter a numbers %d\t", x+1);
scanf("%d",&arr[x]);
}
largest=arr[0];
for (x=1; x<5; x++){
if(arr[x]>largest){
largest=arr[x];
}
}
printf("largest number=\t%d",largest);
return 0;
}
