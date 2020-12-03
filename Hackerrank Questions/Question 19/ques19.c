#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int a;
    scanf("%d", &a);
    
    if(a>=-5000 && a<=5000)
    {
        
    if (a>=1000)
    {
        printf("hugely positive");
    }
    else if(a>=100 && a<=999)
    {
        printf("very positive");
    }
    else if(a<100 && a>0)
    {
        printf("positive");
    }
    else if(a==0)
    {
        printf("zero");
    }
    else if(a<0 && a>-100)
    {
        printf("negative");
    }
    else if(a<=-100 && a>=-999)
    {
        printf("very negative");
    }
    else if(a<=-1000)
    {
        printf("hugely negative");
    }
        
    }
    
    else
    {
        printf("Outside the range");
    }
    
    
    return 0;
}
