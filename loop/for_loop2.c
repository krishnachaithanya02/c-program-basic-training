#include <stdio.h>

int main() {

unsigned long  x;
int count=0;
printf("enter a number");
scanf("%ld",&x);

for(;x>0;x=x/10) {

count++;
}

printf("output-%d\n",count);

return 0;
}
