#include <stdio.h>
int main(){
int x,y;
printf("enter x:");
scanf("%d",&x);
y=++x;
printf("pre=%d\n",y);
printf("enter y:");
scanf("%d",&y);
x=y++;
printf("post=%d",x);
return 0;
}
