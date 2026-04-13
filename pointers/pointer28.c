#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 9, 1, 7};
    int *p = arr;

    int min = *p;
    int max = *p;

    for(int i=0; i<5; i++) {
        if(*p < min)
            min = *p;
        if(*p > max)
            max = *p;

        p++;
    }

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}
