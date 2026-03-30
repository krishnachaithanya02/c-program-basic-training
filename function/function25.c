#include <stdio.h>

int palindrome(char str[])
{
    int i = 0, j = 0;

    while(str[j] != '\0')
        j++;

    j--;

    while(i < j)
    {
        if(str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    if(palindrome(str))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}      
