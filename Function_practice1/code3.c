#include <stdio.h>
int add(int x ,int y);

int main() {
int a,b,c;
a=10;
b=20;
c=25;

add(a,b);  // holds a value of 30 but not assigned to it
printf("%d",c);   //c prints a value 25
} 

int add (int x,int y)
{
int z;
z=x+y;
return z;
}


