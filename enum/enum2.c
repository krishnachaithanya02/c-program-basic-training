#include <stdio.h>

enum Signal { RED, YELLOW, GREEN };

int main() {
    enum Signal s;

    s = YELLOW;

    if(s == RED)
        printf("STOP\n");
    else if(s == YELLOW)
        printf("WAIT\n");
    else if(s == GREEN)
        printf("GO\n");

    return 0;
}
