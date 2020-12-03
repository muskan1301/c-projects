#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double N1, N2, a;
    scanf("%lf %lf", &N1, &N2);
    a=N1;
    N1=N2;
    N2=a;
    printf("%lg %lg", N1, N2);
    return 0;
}
