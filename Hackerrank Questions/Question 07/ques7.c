#include <stdio.h>

int main(void) {

    /* Enter your code below this line*/   
  
int i;
long ix;
short s;
unsigned u;
float x;
double dx;
char c;

    scanf("%d %ld %hd %u %f %lf %c", &i ,&ix, &s, &u, &x, &dx, &c);
    
    
    printf("%d \n", i);
    printf("%ld \n", ix);
    printf("%hd \n", s);
    printf("%u \n", u);
    printf("%.4f \n", x);
    printf("%.10lf \n", dx);
    printf("%c", c);
    
    return 0;
}