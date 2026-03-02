#include <stdio.h>
int main() {
int year;
printf ("enter a year ");
scanf ("%d",&year);
if(year%4==0) {
printf("it is a leap year\n");
}
else {
printf("it is not a leap year\n");
}
return 0;
}
