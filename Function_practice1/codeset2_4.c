#include <stdio.h>

int add (int *x);
int a,b,c;

int main() {

int a[3];
a[0]=12;
a[1]=21;

add(a);
printf("%d",a[2]);     //33
}

int add (int *x)
{
*(x+2)= *(x+0) + *(x+1);
}

