#include <stdio.h>
int main()
{
char str[100];
printf("enter a string:");
scanf("%[^\n]",str);
printf("entered string:%s\n",str);
return 0;
}
