#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    scanf("%d", &a);
    int f=1;
    
    if(a<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else if(a>500)
    {
        printf("Outside the range");
    }
    else if(a==0)
    {
        f=1;
        printf("Factorial of %d = %d", a, f);
    }
    else
    {
        for(int c=a;c!=0;c--)
        {
            f=f*c;
        }
        printf("Factorial of %d = %d", a, f);
    }
    
    return 0;
}
