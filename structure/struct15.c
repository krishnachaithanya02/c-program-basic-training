#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct Student s[3], temp;
    int i, j;

    for(i = 0; i < 3; i++) {
        printf("Enter ID Name Marks: ");
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2-i; j++) {
            if(s[j].marks > s[j+1].marks) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    printf("\nSorted by Marks:\n");
    for(i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);
}
return 0;
}
