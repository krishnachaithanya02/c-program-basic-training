#include <stdio.h>
int add(int x ,int y);
int a,b,c;

int main() {


a=10;
b=20;
c=25;

 add(a,b);
printf("%d",c);    //prints 30 because of global declarations
}

int add (int a,int b)
{

c=a+b;
return b;
}



