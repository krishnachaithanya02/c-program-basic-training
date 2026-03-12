#include <stdio.h>
int main() {
int x,rem,a,rev=0;
printf("enter a number\n");
scanf("%d",&x);
a=x;
while(x!=0){
 rem = x% 10;
        rev = rev * 10 + rem;
      x=x/10;
}
if(a==rev)
{
printf("it is palindrome");
}
else 
{
printf("it is not a palindrome");
}
return 0;
}
