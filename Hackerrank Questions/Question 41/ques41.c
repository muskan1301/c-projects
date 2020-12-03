#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float i, x;
    int y; 
    int n;
    scanf("%d",&n);
if(n>=0 && n<=11)
{ for (y=1; y<=n; y++)

{
for (x=5.50; x<=7.50;x+=0.50)

{
i=2 + (y+ (0.5*x)) ;
    printf("y=%d, x=%.2f and i=%.2f\n", y,x,i);
continue;
}
}}
    else
        printf("Outside the range");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}