#include <stdio.h>
int main() 
{
int s=0;
int *ps;
ps=&s;
*ps=25;
printf("value of:%d\n",s);
printf("value of pointer:%d\n",*ps);
return 0;
}
