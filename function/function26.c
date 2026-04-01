#include <stdio.h>

void countAll(char str[])
{
    int i = 0;
    int v = 0, c = 0, d = 0, s = 0;

    while(str[i] != '\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v++;
        else if(str[i] >= '0' && str[i] <= '4')
            d++;
        else if(str[i] == ' ')
            s++;
        else
            c++;

        i++;
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Digits: %d\n", d);
    printf("Spaces: %d\n", s);
}

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    countAll(str);

    return 0;
}
