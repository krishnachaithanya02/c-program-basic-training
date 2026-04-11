#include <stdio.h>

enum Menu { ADD = 1, SUB, MUL, EXIT };

int main() {
    int choice;
    int a = 10, b = 5;

    printf("1.ADD\n2.SUB\n3.MUL\n4.EXIT\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;

        case SUB:
            printf("Result = %d\n", a - b);
            break;

        case MUL:
            printf("Result = %d\n", a * b);
            break;

        case EXIT:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
