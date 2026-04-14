#include <stdio.h>

int main() {
    char str[] = "Embedded C is powerful";
    char *p = str;
    int count = 1;

    while(*p != '\0') {
        if(*p == ' ')
            count++;
        p++;
    }

    printf("Words = %d", count);
    return 0;
}
