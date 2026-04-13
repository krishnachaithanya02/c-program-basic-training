#include <stdio.h>

struct Student {
    int id;
    float marks;
};

void update(struct Student *p) {
    p->marks = 999;
}

int main() {
    struct Student s = {101, 80};

    update(&s);

    printf("Updated marks = %.2f", s.marks);
    return 0;
}
