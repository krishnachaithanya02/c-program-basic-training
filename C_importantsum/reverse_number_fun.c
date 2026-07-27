#include <stdio.h>
int reverse_number();


int main() {
int num,result; 
printf("enter a number");
scanf("%d", &num);
result=reverse_number(num);
    printf("reverse no=%d\n",result);
    return 0;
}

int reverse_number(int n) {
    int rev=0;
    while(n>0)
    {
        rev=rev*10+(n%10);
        n=n/10;
        
    }
    return rev;
}
