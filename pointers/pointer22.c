#include <stdio.h>

int main() {
    char s1[] = "hello chaithu";
    char s2[] = "hello chaithu";

    char *p = s1;
    char *q = s2;

    while(*p && *q) {
        if(*p != *q) {
            printf("Not Equal");
            return 0;
        }
        p++;
        q++;
    }

    if(*p == *q)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
