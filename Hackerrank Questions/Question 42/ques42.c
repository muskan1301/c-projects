#include <stdio.h>
#include <math.h>

//replace _ at different places with correct code.
double natural_logarithm(int x)
{
    int i;
    double p,o, result2 = (x-1)/(double)x;
    double result = 0;
      for(i=2;i<=7;i++){
            p = pow(result2,i);
            o = p/2;
            result += o;
          
        }
    result = result2 + result;
    return result;
}

int main() {
      int x;
    double result;
    scanf("%d", &x);
    if(x>=1 && x<50)
    {
        result = natural_logarithm(x);
          printf("Log(%d) = %.2lf", x,result);
    }
    else{
        printf("Outside the range");
    }
        
      return 0;
}