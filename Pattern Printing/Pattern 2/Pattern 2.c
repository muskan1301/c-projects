#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of lines: ");
    scanf("%d",&a);
    int b;

    for(int c=1;c<=a;c++)
    {
        for(int b=0;b<c;b++)
        {
            printf("%d",c);
        }
        printf("\n");
    }

    return 0;
}
