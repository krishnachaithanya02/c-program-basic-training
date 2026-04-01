#include <stdio.h>
#include "student.h"

int main()
{
    int choice;

    while(1)
    {
        printf("\n1. Add\n2. Display\n3. Search\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
            addStudent();

        else if(choice == 2)
            displayStudent();

        else if(choice == 3)
            searchStudent();

        else if(choice == 4)
            break;

        else
            printf("Invalid choice!\n");
    }

    return 0;
}
