#include <stdio.h>
int skc(char *s, char *d);

int main() {
char s[30]="EMBEDDED ";
char d[10]="EMBEDDED ";

if(skc(s,d)==1)
{
printf("equal\n");
}
else
{
printf("not equal");
}
}

int skc(char *src,char *dst)
{
while(*src)
{
if(*src++!=*dst++)
{
return 0;
}
}

if(*dst!=0)
{
return 0;
}
  
