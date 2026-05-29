#include <stdio.h>
void INCREMENTARRAY();

int main() {
int mynum[5]={1,2,3,4,5};
int n=5;
printf("before\n");
for(int i=0;i<n;i++) {
printf("%d\n",mynum[i]);
}

INCREMENTARRAY(mynum,n);

printf("After\n:");
for(int i=0;i<n;i++) {
printf("%d\n",mynum[i]);
}
return 0;
}

void INCREMENTARRAY(int *ptr, int size) {
for(int i=0; i<size; i++) {
*ptr= *ptr+1;
ptr++;
}
}
