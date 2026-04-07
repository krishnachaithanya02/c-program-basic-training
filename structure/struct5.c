#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s[3];
    int i;
    float sum = 0, avg;

    for(i = 0; i < 3; i++) {
        printf("Enter ID and Marks of student %d: ", i+1);
        scanf("%d %f", &s[i].id, &s[i].marks);
        sum = sum + s[i].marks;
    }
    avg = sum / 3;

    printf("\nAverage Marks = %.2f\n", avg);

    return 0;
}
