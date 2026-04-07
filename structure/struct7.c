#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time t;
    int totalsec;

   
    printf("Enter hours minutes seconds: ");
    scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);

   
    totalsec = (t.hours * 3600) + (t.minutes * 60) + t.seconds;

    printf("Total Seconds = %d\n", totalsec);

    return 0;
}
