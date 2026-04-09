#include <stdio.h>


typedef unsigned int u32;
typedef unsigned char u8;
typedef struct
{
    u32 id;
    u8 age;
    char name[20];
} Student;

int main(void)
{

    Student s1 = {101, 20, "Krishna"};

    printf("ID   : %u\n", s1.id);
    printf("Age  : %u\n", s1.age);
    printf("Name : %s\n", s1.name);

    return 0;
}
