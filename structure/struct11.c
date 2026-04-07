#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    int id;
    char name[50];
    struct Address add;
};

int main() {
    struct Student s;

    printf("Enter ID Name City Pincode: ");
    scanf("%d %s %s %d", &s.id, s.name, s.add.city, &s.add.pincode);

    printf("\nStudent Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.add.city);
    printf("Pincode: %d\n", s.add.pincode);

    return 0;
}
