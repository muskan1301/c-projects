#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long n;
    int count = 0;
       scanf("%lld", &n);
 if(n>=1 && n<= 99999)
 {
    while (n != 0) {
        n /= 10;    
        ++count;
    }

    printf("Number of digits: %d", count);
 }
    else
    {
        printf("Outside the range");
    }
    
    return 0;
}