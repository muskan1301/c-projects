#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int year;
    scanf("%d", &year);
    
    if(year<1111 || year>9999)
    {
        printf("Outside the range");
    }
    
    else
    {
    if(year%400==0)
    {
        printf("%d is a leap year.",year);
    }
        else
        {
            printf("%d is not a leap year.",year);
        }
        }
    
    
    return 0;
}
