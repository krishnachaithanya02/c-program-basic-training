#include <stdio.h>

struct DOB {
    int day;
    int month;
    int year;
};


struct Person {
    char name[50];
    struct DOB dob;
};

int main() {
    struct Person p;
    int currentYear = 2026;
    int age;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &p.dob.day, &p.dob.month, &p.dob.year);

   
    age = currentYear - p.dob.year;


    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("DOB: %02d/%02d/04%d\n", p.dob.day, p.dob.month, p.dob.year);
    printf("Age: %d\n", age);

    return 0;
}
