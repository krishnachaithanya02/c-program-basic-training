#include <stdio.h>

#include <string.h>


int main() {

int len,i;
char a[10];

printf("enter a string");

scanf("%s",a);

len=strlen(a);


for(i=len-1;i>=0;i--)

{

printf("%c",a[i]);

}

return 0;
}

