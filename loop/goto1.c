#include <stdio.h>
int main(){
int x=1;
ready:
if(x<=10)
{
printf("%d\n",x);
x++;
goto ready;
}
return 0;
}
