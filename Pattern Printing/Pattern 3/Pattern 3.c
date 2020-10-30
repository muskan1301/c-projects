#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of lines: ");
    scanf("%d",&a);
    int b;

    for(int c=1;c<=a;c++)
    {
        for(int b=1;b<=c;b++)
        {
            printf("%d ",b);
        }
        printf("\n");
    }

    return 0;
}
