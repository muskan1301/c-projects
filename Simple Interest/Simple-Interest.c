#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    //Variable Declarations
    float p,r,t;

    //Standard Input
    printf("Enter the principle amount , the rate of interest(P.A.) and the time period(years) \n");
    scanf("%f %f %f", &p, &r, &t);

    //Calculations
    float interest=(p*r*t)/100;
    float amount=(interest + p);

    // "%.2f" prints the float variable to only 2 digits after the decimal.
    printf("Interest = %.2f", interest);

    return 0;
}
