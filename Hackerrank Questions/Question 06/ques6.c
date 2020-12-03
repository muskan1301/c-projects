#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    float p,r,t;
    //printf("Enter the principle amount , the rate of interest(P.A.)and the time period(years) \n");
    scanf("%f %f %f", &p, &r, &t);
    float interest=(p*r*t)/100;
    //float amount=(interest + p);
    printf("%.2f", interest);

    return 0;
}