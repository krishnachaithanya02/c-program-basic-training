#include <stdio.h>

enum State {
    INIT,
    RUNNING,
    ERROR
};

enum State updateState(enum State current) {
    if(current == INIT)
        return RUNNING;
    else if(current == RUNNING)
        return ERROR;
    else
        return INIT;
}

int main() {
    enum State s = INIT;

    printf("Initial State: %d\n", s);

    s = updateState(s);
    printf("After Update 1: %d\n", s);

    s = updateState(s);  
    printf("After Update 2: %d\n", s);

    return 0;
}
