#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b=1;
    
    if(a>=1 && a<=10)
    {
    for(int c=1;c<=a;c++)
    {
        for(int r=1;r<=c;b++)
        {
            printf("%d ",b);
            r++;
        }
        printf("\n");
    }
    }
    
    else
    {
        printf("Outside the range");
    }

    return 0;
}