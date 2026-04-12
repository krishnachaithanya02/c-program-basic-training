#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Using *(p+i):\n");
    for(int i=0; i<5; i++) {
        printf("%d ", *(p+i));
    }

    printf("\nUsing p[i]:\n");
    for(int i=0; i<5; i++) {
        printf("%d ", p[i]);
    }

    printf("Using *(i+p):\n");
    for(int i=0; i<5; i++) {
        printf("%d ", *(i+p));
    }

    return 0;
}
