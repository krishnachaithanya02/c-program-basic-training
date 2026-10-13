#include <stdio.h>
void add(void);
int a,b,c;

int main() {


a=10;
b=20;


add();
c=a+b;
printf("%d",c);   // globally change c
}

void add(void){
a=45;
b=15;
c=a+b;

}

