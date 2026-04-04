#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int num;

    printf("Enter a number as string: ");
    scanf("%s", str);

    num = atoi(str);   // string → integer

    printf("Integer value = %d", num);

    return 0;
}
