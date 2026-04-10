#include <stdio.h>
void calc();

int main() 
{

int x=20,y=10;
int sum=0,diff=0;

calc(x,y,&sum,&diff);

printf("sum: %d\n",sum);
printf("diff: %d\n",diff);

return 0;

}
void calc(int a,int b,int *sum,int *diff)
{
*sum=a+b;
*diff=a-b;
}
