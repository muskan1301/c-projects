#include <stdio.h>

int main()
{
    int a,j,k;
    printf("Enter the number of lines: ");
    scanf("%d",&a);
    int space=a;
    int c=1;

    for(int i=1; i<=a ; i++)
    {
        for(k=space; k>=1; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++,c++)
        {
            printf("%d ",c);
        }
        printf("\n");
        space--;
    }

    return 0;
}
