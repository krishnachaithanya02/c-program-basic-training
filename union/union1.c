#include <stdio.h>

union data {
int i;
float f;
char str[20];
};

int main() {
union data d;
d.i=10;
printf("integer %d\n",d.i);

d.f=3.14;
printf("f %.2f\n",d.f);

sprintf(d.str,"hello");
printf("%s\n",d.str);

return 0;
}
