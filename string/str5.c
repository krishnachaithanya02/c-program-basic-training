#include <stdio.h>

int main() {
    int x;
    char str[20];
    printf("enter a number:");
    scanf("%d",&x);
    sprintf(str,"%d",x);
    printf("string=%s",str);

    return 0;
}
