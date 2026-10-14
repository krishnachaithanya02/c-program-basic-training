#include <stdio.h>
int add (int *x,int *y,int *z);

int main() {
int a,b,c;
a=10;
b=20;
add(&a, &b, &c);
printf("%d",c);     //prints 30
}
int add (int *x,int *y,int *z)
{
*z= *x + *y;
}

