#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s = {101, 95.5};
    struct Student *p = &s;

    printf("ID = %d\n", p->id);
    printf("Marks = %.2f\n", p->marks);

    return 0;
}
