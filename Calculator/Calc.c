#include <stdio.h>
int main()
{

    float a,b;
    printf("Enter two numbers \n");
    scanf("%f %f", &a, &b);
    float sum=a+b;
    float sub;
    if(b>a){
        sub=b-a;
    }
    else
    {
        sub=a-b;
    }
    float pro=a*b;
    float div=a/b;

    printf("Sum = %.3f \nDifference = %.3f \nProduct = %.3f \nQuotient = %.3f ", sum, sub, pro, div);
}
