#include <stdio.h>

int main() {
    char src[] = "hello chaithu";
    char dest[20];

    char *p = src;
    char *q = dest;

    while(*p != '\0') {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';

    printf("Copied string = %s", dest);
    return 0;
}
