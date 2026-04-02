#include <stdio.h>

int main()
{
    char str[0];  
    int x;     

    printf("Enter an alphabet: ");
    scanf("%s", str);

    x = str[0];

    printf("ASCII value of %c = %d\n", str[0],x);

    return 0;
}
