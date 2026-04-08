#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student *ptr;

    ptr = (struct Student*) malloc(sizeof(struct Student));

    printf("Enter ID and Name: ");
    scanf("%d %s", &ptr->id, ptr->name);

    printf("Data: %d %s\n", ptr->id, ptr->name);

    free(ptr);

    return 0;
}
