#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int rows, i, j;
  scanf("%d",&rows);
    if(rows>=1 && rows<= 10)
    {
  for(i=1; i<=rows; i++) {
    for(j=1; j<=i; j++) {
      printf("%d ", i);
    }
    printf("\n");
  }
    }
    else
        printf("Outside the range");
      
    return 0;
}