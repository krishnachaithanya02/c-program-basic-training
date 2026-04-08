#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s = {1, "Krishna"};
    struct Student *ptr;

    ptr = &s;

    printf("ID = %d\n", ptr->id);
    printf("Name = %s\n", ptr->name);

    return 0;
}
