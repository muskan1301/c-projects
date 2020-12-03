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
        int j=1;
        int temp2=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int k=1; k<temp; k++)
            {
                printf(" ");
            }
            for(int r=1; r<=temp2; j++, r++)
            {
                printf("%d ",j);
            }
            printf("\n");
            temp--;
            temp2++;
        }
    }
    
    return 0;
}
