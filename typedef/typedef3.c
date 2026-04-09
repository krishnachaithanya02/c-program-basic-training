#include <stdio.h>

typedef unsigned int u32;

int main(void)
{
    u32 sys_1 = 0;

    for(sys_1 = 0; sys_1 < 5; sys_1++)
    {
        printf("Tick = %u\n", sys_1);
    }

    return 0;
}
