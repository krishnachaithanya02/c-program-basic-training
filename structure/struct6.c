#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d;

    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);


    printf("Formatted Date: %d/%d/%d\n", d.day, d.month, d.year);

    return 0;
}
