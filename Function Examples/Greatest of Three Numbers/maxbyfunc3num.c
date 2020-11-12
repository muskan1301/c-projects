#include <stdio.h>
int ggreat(int a, int b, int c);

int main()
{
    int a,b,c,d;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a==b && a==c)
    {
        printf("All the numbers are equal!");
        return 0;
    }
    d=ggreat(a,b,c);
    printf("The greatest number is %d", d);

return 0;
}

int ggreat(int a,int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else if(c>a && c>b)
    {
        return c;
    }
}