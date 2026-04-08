#include <stdio.h>

struct student {
int id;

union data {
float marks;
char grade;
}
d;
};
int main() {
struct student s;
s.id=101;
s.d.marks=85.5;
printf("id=%d\n",s.id);
printf("marks=%.2f\n",s.d.marks);
s.d.grade ='a';
printf("graded=%c\n",s.d.grade);
return 0;
}
