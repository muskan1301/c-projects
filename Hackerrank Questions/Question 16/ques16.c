#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float N1;
    float N2;
    
    scanf("%f %f",&N1,&N2);
    
    long N3=(long)(N1+N2);
    printf("%ld",N3);   
    return 0;
}
