#include <stdio.h>

int skc(char *s, char *d);

int main() {
char s[10]="EMBEDDED ";
char d[10]="ENGINEER ";
skc(s,d);
printf("%s\n",s);
}
int skc(char *src, char *dst)
{
while(*src)
{
 *src++;
}
while (*dst)
{
*src++= *dst++;
}
*dst=0;
}
