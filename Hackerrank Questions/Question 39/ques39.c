#include <stdio.h>
//write function prototype here

int checkPrimeNumber(int n)
{
    int ctr=0;
    
  for(int i=2;i<n;i++)
  {
      if((n%i)==0)
      {
          ctr++;
          break;
      }
  }
    
    return ctr;
    
}


int main() 
{

    int n1;
    scanf("%d", &n1);
    
    if(n1>100 || n1<0)
    {
        printf("Outside the range");
        return 0;
    }    
    
    else if (n1==1)
    {
        printf("Not prime");
        return 0;
    }
    else
    {
    if(checkPrimeNumber(n1)==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
        return 0;
    }
  
}