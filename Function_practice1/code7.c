#include <stdio.h>
int add(int x ,int y);
int a,b,c;

int main() {

int a,b,c;
a=10;
b=20;
c=b-a;     //10

 add(a,b);
printf("%d",c);    // prints 10
}

int add (int a,int b)
{

c=a+b;
return b;
}

