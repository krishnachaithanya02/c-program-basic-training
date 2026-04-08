#include <stdio.h>
struct student {
int id;
char name[50];
float marks;
};
int main() {
struct student s[3];
int i;
for(i=0;i<3;i++)
{
printf("enter details of student %d\n",i+1);
scanf("%d %s %f",&s[i].id,s[i].name,&s[i].marks);
}
printf("\n student details:\n");
for(i=0;i<3;i++)    {
printf("%d %s %.2f\n:",s[i].id,s[i].name,s[i].marks);
}
return 0;
}
