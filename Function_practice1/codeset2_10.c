#include <stdio.h>
int skc(char *s, char *d);

int main() {

char s[30]="EMBEDDED ";
char d[10];

skc(s,d);
printf("%s",d);                  //EMBEDDED
}

int skc(char *src, char *dst)
{
int i=0;
while(src[i]!=0) {
*dst++ = src[i];
i++;
}
*dst=0;
}

