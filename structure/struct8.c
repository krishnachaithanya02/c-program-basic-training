#include <stdio.h>
void display();

struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student s;

    printf("Enter ID Name Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);

    display(s);

    return 0;
}
void display(struct Student s) {
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
