#include <stdio.h>
int add(int x ,int y);
int a,b,c;

int main() {


int a,b,c;
a=10;
b=20;
c=25;

c= add(a,b);   //returns 20
printf("%d",c);  //prints 20
}

int add (int a,int b)
{
int c;
c=a+b;
return b;
}

