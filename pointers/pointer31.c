#include <stdio.h>
void strcopy();

int main()
{
char src[]="hello";

char dst[20];
strcopy(src,dst);
printf("copied string:%s",dst);
return 0;
}
void strcopy(char *src,char *dst)
{
while(*src !='\0')
{
*dst = *src;
src++;
dst++;
}
*dst ='\0';
}


