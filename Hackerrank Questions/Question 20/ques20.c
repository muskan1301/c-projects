#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    scanf("%d",&a);
    int b=0;
    
    if(a<10000 || a>99999)
    {
        printf("Outside the range");
        return 0;
    }
    
    
    else
    { 
        int t=a;
        for(int i=5; i>0; i--)
        {
        b=(b*10)+(a%10);
        a=a/10;
        }
    
        printf("%d \n", b);
        
        if(t==b)
        {
            printf("Same");
        }
        else
        {
            printf("Different");
        }
    
    return 0;
    }
}
