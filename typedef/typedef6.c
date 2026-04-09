#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    float marks;
} Student;

int main() {
    Student s;

    printf("Enter ID, Name, Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);

    printf("\nStudent Details:\n");
    printf("ID: %d\nName: %s\nMarks: %.2f\n", s.id, s.name, s.marks);

    return 0;
}
