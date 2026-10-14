#include <stdio.h>

int skc(char *s, char *d);

int main() {

char s[10]="EMBEDDED";
char d[10];

skc(s,d);
printf("%s",d);   // copy each word to dest and prints the word

}

int skc(char *src, char *dst)

{
while(*src)
{
*dst = *src;
dst = dst+1;
src = src+1;
}
}

