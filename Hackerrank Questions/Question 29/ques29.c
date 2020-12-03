#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n,i,p,j;
    
    scanf("%ld",&n);
    scanf("%ld",&i);
    
    if(n>=1 && n<=20)
    {
    for(j=1;j<=i;j++)
    {
        p=n*j;
        printf("%ld * %ld = %ld \n",n,j,p);
    }
    }
    else{
        printf("Outside the range");
    }
    
    return 0;
}
