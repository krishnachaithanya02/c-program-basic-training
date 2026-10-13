#include <stdio.h>
int add(int x ,int y);

int main() {
int a,b,c;
a=10;
b=20;

c=add(a,b);    // 30 deposit here 
printf("%d",c);
}

int add (int x,int y)
{
int z;
z=x+y;
return z;
}



