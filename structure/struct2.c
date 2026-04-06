#include <stdio.h>
struct student {
int id;
char name[50];
float marks;
};
int main()
{
struct student s1={100,"krish",85.5,};
printf("student id=%d\n",s1.id);
printf("student name=%s\n",s1.name);
printf("student marks=%.2f\n",s1.marks);
s1.marks=90.05;
printf("updated marks=%.2f\n",s1.marks);
return 0;
}

