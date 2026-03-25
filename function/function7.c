#include <stdio.h>
void swap(int *a, int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("inside function:a=%d,b=%d",*a,*b);
}
int main()
{
int x=10,y=20;
swap(&x,&y);
printf("inside main:x=%d,y=%d",x,y);
return 0;
}
