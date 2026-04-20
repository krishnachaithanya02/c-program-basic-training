#include <stdio.h>

void trackMe() {

    static int C = 0;

    C++;
    printf("I have been called %d times\n", C);

}


void main() {

    trackMe();
    trackMe();
    trackMe();

}
