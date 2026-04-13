#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s1 = {1, 90};
    struct Student s2 = {2, 85};

    struct Student *arr[2];

    arr[0] = &s1;
    arr[1] = &s2;

    for(int i=0; i<2; i++) {
        printf("ID = %d, Marks = %.2f\n", arr[i]->id, arr[i]->marks);
    }

    return 0;
}
