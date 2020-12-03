#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int GCD, n1, n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    if(n1<-1000 || n1>1000 || n2<-1000 || n2>1000)
    {
        printf("Outside the range");
    }
    else
    {
        if(n1<0)
        {
            n1=-n1;
        }
        if(n2<0)
        {
            n2=-n2;
        }
    
        if(n1<=n2)
        {
        
            for(int i=1;i<=n1;i++)
                {
                    if((int)n1%i==0 && (int)n2%i==0)
                        {
                            GCD=i;
                        }
                }
        
            }
        else
        {
            for(int i=1;i<=n2;i++)
                {
                    if((int)n1%i==0 && (int)n2%i==0)
                        {
                            GCD=i;
                        }
                    }
        }
    
        printf("GCD = %d", GCD);
        
    }
    
    return 0;
}
