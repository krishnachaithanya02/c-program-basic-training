#include <stdio.h>

int main() {

int n,sum=0,r,n1;

printf("enter a number n");
scanf("%d",&n);


n1=n;

while(n>0) {
r=n%10;
sum=sum+(r*r*r);
n=n/10;

}

if(n1==sum)

printf("armstrong");

else
printf("non armstrong");


return 0;

}
