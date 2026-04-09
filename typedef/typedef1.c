#include <stdio.h>

typedef unsigned char u8;

int main()
{
    u8 sensor_st = 250;

    printf("Size of u8 = %zu bytes\n", sizeof(u8));
    printf("Sensor Status = 0x%X\n", sensor_st);

    return 0;
}
