#include <stdio.h>

int main() {
    char str[] = "hello chaithu 2";
    char *p = str;
    int len = 0;

    while(*p != '\0') {
        len++;
        p++;
    }

    printf("Length = %d", len);
    return 0;
}
