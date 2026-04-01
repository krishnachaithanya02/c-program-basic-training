#include <stdio.h>
#include <string.h>
#include "student.h"

int ids[MAX];
char names[MAX][30];
float marks[MAX];

int count = 0;

void addStudent()
{
    printf("\nEnter ID: ");
    scanf("%d", &ids[count]);

    printf("Enter Name: ");
    scanf(" %[^\n]", names[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;
    printf("Student Added!\n");
}

void displayStudent()
{
    if(count == 0)
    {
        printf("\nNo Records!\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("\n--- Student %d ---\n", i+1);
        printf("ID: %d\n", ids[i]);
        printf("Name: %s\n", names[i]);
        printf("Marks: %.2f\n", marks[i]);
    }
}
void searchStudent()
{
    int id, found = 0;

    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(ids[i] == id)
        {
            printf("\nStudent Found!\n");
            printf("ID: %d\n", ids[i]);
            printf("Name: %s\n", names[i]);
            printf("Marks: %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found!\n");
}
