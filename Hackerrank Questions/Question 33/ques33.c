#include<stdio.h>
int main()
{
    int i, j, rows;
   scanf("%d", &rows);
    if(rows>=0 && rows<=10)
    {
      for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }}
    else
        printf("Outside the range");
   return 0;
}