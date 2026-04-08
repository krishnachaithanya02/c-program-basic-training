#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s[3];
    int i, key, found = 0;

  
    for(i = 0; i < 3; i++) {
        printf("Enter ID and Name: ");
        scanf("%d %s", &s[i].id, s[i].name);
    }

    printf("Enter ID to search: ");
    scanf("%d", &key);

    for(i = 0; i < 3; i++) {
        if(s[i].id == key) {
            printf("Found: %d %s\n", s[i].id, s[i].name);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Student not found\n");
    }

    return 0;
}
