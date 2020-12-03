#include <stdio.h>

int main() {

    /* Enter your code here.*/    
    double bs;
    scanf("%lf", &bs);
    
    double gs;
    gs= bs + (0.2*bs) + (0.4*bs);
    
    printf("%lg", gs);
    
    
    return 0;
}