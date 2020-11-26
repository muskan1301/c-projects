#include <stdio.h>

int main() {

    /* Enter your code here.*/    
    int a,b;
    scanf("%d %d", &a, &b);
    
    double q, r;
    q=a/b;
    r=a%b;
    printf("Quotient = %.0lf \nRemainder = %.0lf", q, r);
    
    
    return 0;
}