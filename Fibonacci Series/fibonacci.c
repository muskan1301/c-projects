#include <stdio.h>

void fibonacciseries(int n)
{
    int a=0,b=1;
    int next=0;

    printf("%d \n%d \n", a,b);

    for(int i=2; i<n; i++)
    {
        next=a+b;
        a=b;
        b=next;
        printf("%d \n", next);
    }
    
}

int main()
{
    printf("Enter the number of elements to be displayed in the Fibonacci series: ");
    int n;
    scanf("%d", &n);

    fibonacciseries(n);

    return 0;
}