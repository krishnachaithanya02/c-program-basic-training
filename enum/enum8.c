#include <stdio.h>

enum Direction { CW, CCW };

struct Motor {
    int speed;
    enum Direction dir;
};

void printMotor(struct Motor m) {
    printf("Motor Speed: %d\n", m.speed);
    printf("Direction: ");
    if(m.dir == CW)
        printf("Clockwise\n");
    else
        printf("Counter-Clockwise\n");
}

int main() {
    struct Motor m1;
    m1.speed = 100;
    m1.dir = CW;

    printMotor(m1);

    m1.dir = CCW;
    printMotor(m1);

    return 0;
}
