#include <stdio.h>


typedef unsigned short u16;   
typedef unsigned int   u32;   
typedef unsigned long  u64;  

int main(void)
{
    u16 adc_value = 102;       
    u32 counter   = 1000;     
    u64 uptime    = 12345678900034; 

    printf("u16 ADC Value = %u\n", adc_value);
    printf("u32 Counter   = %u\n", counter);
    printf("u64 Uptime    = %lu\n", uptime);

    return 0;
}
