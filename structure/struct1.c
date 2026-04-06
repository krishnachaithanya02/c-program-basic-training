#include <stdio.h>

struct Address {
    char city[20];
    int zip;
};

struct Person {
    char name[20];
    struct Address ad;
};

int main() {
    struct Person p1 = {"Alice", {"New York", 10001}};

    printf("Name: %s\n", p1.name);
    printf("City: %s\n", p1.ad.city);
    printf("ZIP Code: %d\n", p1.ad.zip);

    return 0;
}
