#include <stdio.h>
int main() {

int x,y,z;     //printing a two digit even number whose sum of the digit = 6
for(x=10;x<=99;x++)
{
if(x%2==0) {
y=x%10;
z=x/10;

if (y+z==6){

printf("%d\n",x);

}

}
}
return 0;
}
