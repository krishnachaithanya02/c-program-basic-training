#include <stdio.h>

void print_array();

 int main(void)
{
    int data[] = {10, 20, 30, 40, 50};

    print_array(data, 2);

    return 0;
}
void print_array(int *arr, int size)
{
for(int i=0; i< size; i++)

printf("%d\n", *(arr + i));
}

