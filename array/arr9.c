#include <stdio.h>
int main()
{
int mat[2][3]={{'a','b','c'},{'d','e','f'}};
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
{
printf("%c\t",mat[i][j]);
}
printf("\n");
}
return 0;
}
