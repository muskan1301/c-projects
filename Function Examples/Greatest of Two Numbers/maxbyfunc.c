#include <stdio.h>
int ggreat(int a, int b);

int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    if(a==b)
    {
        printf("Both the numbers are equal!");
        return 0;
    }
    c=ggreat(a,b);
    printf("The greater number is %d", c);

return 0;
}

int ggreat(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}