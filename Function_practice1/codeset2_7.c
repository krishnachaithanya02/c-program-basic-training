#include <stdio.h>

int skc(char *s, char *d);

int main() {

char s[10]="EMBEDDED";
char d[10];

skc(s,d);
printf("%s",d);

}

int skc(char *src, char *dst)
{
while(*src)
{
*dst++ = *src++;
}
*dst=0;

}
