#include <stdio.h>

struct test {
int a;
float b;
char c;
};

union testunion {
int a;
float b;
char c;
};

int main() {
printf("size of:=%lu bytes\n",(sizeof(struct test)));
printf("size of:=%lu bytes",(sizeof(union testunion)));
return 0;
}
