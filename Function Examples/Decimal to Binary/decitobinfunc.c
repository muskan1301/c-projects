#include <stdio.h>

int deci2bin(int n)
{
    long r=0;

    while(n!=0)
    {
        r=(r*10)+(n%2);
        n=n/2;
    }

    return r;
}

int main()
{
    long n;

    printf("Enter a decimal(integer) number: ");
    scanf("%d", &n);

    printf("The binary number is: %li", deci2bin(n));
}