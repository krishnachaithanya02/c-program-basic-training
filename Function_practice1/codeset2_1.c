#include <stdio.h>

int add (int *x,int *y);

int main() {

int a,b,c;

a=10;
b=20;
c=
add(&a,&b);
printf("%d",c);
}

int add (int *x,int *y)
{
int z;
*x=21;
*y=33;
z= *x + *y;
return z;
}
