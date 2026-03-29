#include <stdio.h>
int reverse(int n)
{
    int rev = 0, d;

 while(n > 0)
 {
 d = n % 10;          
 rev = rev * 10 + d;  
 n = n / 10;          
 }
return rev;
}


int Palindrome(int n)
{
    if(n == reverse(n))
        return 1;   
    else
        return 0;   
}

int main()
{
    int x;

    printf("Enter number: ");
    scanf("%d", &x);

    if(Palindrome(x))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
