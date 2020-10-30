#include <stdio.h>;

int main()
{
    printf("Enter the number of lines the pattern should form:");
    int a;
    scanf("%d",&a);

    for(int c=a;c!=-1;c--)
    {
        for(int b=1;b<=c;b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
