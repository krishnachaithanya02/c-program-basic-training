#include <stdio.h>

union Sensor {
    int i;
    float f;
};

int main() {
    union Sensor s;
    unsigned char *ptr;
    int i;

    s.f = 25.5;

    printf("Float value = %.2f\n", s.f);

    ptr = (unsigned char*)&s;

    printf("Raw memory (in hex): ");
    for(i = 0; i < sizeof(s); i++) {
        printf("%02X ", ptr[i]);
    }

    printf("\n");

    s.i = 100;

    printf("\nInt value = %d\n", s.i);

    printf("Raw memory (in hex): ");
    for(i = 0; i < sizeof(s); i++) {
        printf("%02X ", ptr[i]);
    }

    return 0;
}
