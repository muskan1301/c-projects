#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
    printf("%d is even.", a);
    }
    else
    {
    printf("%d is odd.", a);
    }
    return 0;
}
