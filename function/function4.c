#include <stdio.h>
int check(int x)
{
if(x%2==0)
return 1;
else 
return 0;
}
int main()
{
int y;
y=check(5);
if(y==1)
printf("even number");
else 
printf("odd number");
return 0;
}
