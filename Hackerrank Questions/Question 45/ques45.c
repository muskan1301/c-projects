#include <stdio.h>

int hcf(int n1, int n2);
int main() 
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    n1=(n1>0) ? n1: -n1;
    n2=(n2>0) ? n2: -n2;
      if(n1>=-1000 && n2>=-1000 && n1<=1000 && n2<=1000)
    {
    printf("GCD = %d", hcf(n1,n2));
    }
      else{
      printf("Outside the range");
    }
    return 0;
}

int hcf(int a,int b)
{
    if (b!=0)
        return hcf(b,a%b);
    else
        return a;
}