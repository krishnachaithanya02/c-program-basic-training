#include <stdio.h>
#include <string.h>
int strlenn(char str[])
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Length = %d",strlenn(str));

    return 0;
}
