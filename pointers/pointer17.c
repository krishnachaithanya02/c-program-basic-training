#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15};
    int *p = arr;

    printf("%d\n", *p);   

    p++;                 
    printf("%d\n", *p); 

    (*p)++;              
    printf("%d\n", *p);  

    return 0;
}
