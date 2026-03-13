#include <stdio.h>
int main(){
int x,y,z;
printf("enter a three numbers:");
scanf("%d %d %d",&x,&y,&z);
if (x>=y && x>=z){
printf("largest number is %d\n",x);
}
else if(y>=x && y>=z){
printf("largest number is %d\n",y);
}
else {
printf("largest number is %d\n",z);
}
return 0;
}
