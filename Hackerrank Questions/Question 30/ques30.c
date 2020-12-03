#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j;
    scanf("%d %d",&i,&j);
    
    if(i<=100 && i>=1 && j<=20 && j>=1)
    {
    printf("%ld",(long)pow(i,j));
    }
    else{
        printf("Outside the range.");
    }
    return 0;
}
