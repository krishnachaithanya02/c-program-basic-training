#include <stdio.h>

union data {
    int i;
    float f;
    char c;
};

int main() {
    union data d;

    d.i = 10;
    printf("After assigning int:\n");
    printf("i = %d\n", d.i);

    d.f = 5.5;
    printf("\nAfter assigning float:\n");
    printf("f = %f\n", d.f);
    printf("i (changed) = %d\n", d.i);

    d.c = 'A';
    printf("\nAfter assigning char:\n");
    printf("c = %c\n", d.c);
    printf("f (changed) = %f\n", d.f);

    return 0;
}
