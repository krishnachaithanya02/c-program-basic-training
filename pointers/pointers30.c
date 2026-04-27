#include <stdio.h>
void find_2digit_odd_sum7();

int main(void)
{
    
    find_2digit_odd_sum7(); 
    return 0;
}

void find_2digit_odd_sum7()
{
    int num;
    int *ptr;

    for (num = 10; num <= 99; num++)
    {
        ptr = &num;

        if ((*ptr % 2) != 0)
        {
            int first = *ptr / 10;
            int second = *ptr % 10;

            if ((first + second) == 7)
            {
                printf("%d ", *ptr);
            }
        }
    }
}
