#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n;
    scanf("%d", &n);
    if(n>=0 && n<=10000)
    {
    if(n & 1)
    { printf("Odd");}
    else
    {
        printf("Even");
    }}
    else 
    {printf("undefined");}

    return 0;
}
