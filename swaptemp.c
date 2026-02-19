#include <stdio.h>
int main() {
int x,y,temp;
printf("enter a two numbers:");
scanf("%d %d",&x, &y);
temp =x;
x=y;
y=temp;
printf("a=%d\n",x);
printf("b=%d\n",y);
return 0;
}



