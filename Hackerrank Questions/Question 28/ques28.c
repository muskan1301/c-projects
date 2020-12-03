#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n=-1;
    int sum=0;
    
    while(n<0)
    {
        scanf("%d",&n);
    }
    
    if(n<500 && n>1)
    {
        for(int i=1; i<=n; i++)
        {
        sum=sum+i;
        }
        
        printf("Sum = %d", sum);
    }
    
    else{
        printf("Outside the range");
    }
    
    return 0;
}
