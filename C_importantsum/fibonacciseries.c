#include <stdio.h>

int main() {

int n,a=0,b=1,c;

printf("enter a number n");

scanf("%d",&n);

printf("%d %d ",a,b);

for(int i=3;i<=n;i++)

{

c=a+b;
a=b;
b=c;

printf("%d\n",c);
}
return 0;
}

