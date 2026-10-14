#include <stdio.h>

int ps(char *s);

int main() {
char s[]="EMBEDDED";
ps(s);
}

int ps(char *p)
{
while(*p)
{
printf("%c", *p++);  //Prints perfectly word EMBEDDED 
}
}
