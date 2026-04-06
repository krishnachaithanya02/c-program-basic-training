#include <stdio.h>

struct Employee {
    int id;
    float salary;
    char department[50];
};

int main() {
    struct Employee e[3];
    int i, maxIndex = 0;

    for(i = 0; i < 3; i++) {
        printf("\nEnter details of employee %d\n", i+1);
        scanf("%d %f %s", &e[i].id, &e[i].salary, e[i].department);
    }

    for(i = 1; i < 3; i++) {
        if(e[i].salary > e[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("\nHighest Salary Employee:\n");
    printf("ID: %d\nSalary: %.2f\nDepartment: %s\n",
           e[maxIndex].id, e[maxIndex].salary, e[maxIndex].department);

    return 0;
}
