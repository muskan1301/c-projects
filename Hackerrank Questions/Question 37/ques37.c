#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    
    if(n<1 || n>10)
    {
        printf("Outside the range");
    }
    else
    {
        int temp=n;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<temp;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
            printf("%d ",i);
            }
            printf("\n");
            temp--;
        }
    }
    
    return 0;
}
