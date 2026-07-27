#include <stdio.h>
int prime();


int main() {
int n; 
printf("enter a number");
scanf("%d", &n);
if (prime(n)) {
    printf("it is a prime number");
}
else {
    printf("it is not a prime");
}
return 0;
}
int prime(int n) {
    int i;
    if(n<=1)
    return 0;

for(i=2;i<=n-1;i++)
{
    if(n%i==0)
    return 0;
    else 
    return 1;

}
}
