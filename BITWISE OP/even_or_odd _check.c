#include <stdio.h>

int main()  {

int n,m,k;

printf("enter a n");

scanf("%d",&n);
m=n>>1;
k=m<<1;

if(n==k)
printf("it is a even");

else
printf("it is a odd");


return 0;

}

