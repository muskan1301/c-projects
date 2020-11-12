#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }

    odd:
        {
            printf("Odd");
            return 0;
        }
    even:
        {
            printf("Even");
        }

        return 0;
}
