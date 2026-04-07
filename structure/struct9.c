#include <stdio.h>
void update();

struct student {
int id;
float marks;
};

int main() {
struct student s = {1,50};
update(s);
printf("marks after function call=%.4f\n",s.marks);
return 0;
}
void update(struct student s){
s.marks=100;
}
