#include <stdio.h>

enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
    enum Days d;

    for(d = SUN; d <= SAT; d++) {
        printf("Value = %d\n", d);
    }

    return 0;
}
