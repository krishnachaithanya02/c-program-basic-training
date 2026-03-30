#include <stdio.h>

void strcpyy(char src[], char dest[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char src[50], dest[50];

    printf("Enter string: ");
    scanf("%s", src);

    strcpyy(src, dest);

    printf("Copied string: %s", dest);

    return 0;
}
