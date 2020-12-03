#include <stdio.h>

// complete the function. Remove erros in the stub if any.
// Write prototype here

long fact(int n)
{
  if(n==0){
      return 1;
  }else
  {
      return n * fact(n-1);
  }
}
int main() {
    int n;
    unsigned long long facto = 1;
   
    scanf("%d", &n);
    if(n>=500)
    {
        printf("Outside the range");
    }
    else if(n<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
     else
    { 
        facto= fact(n);
        printf("Factorial of %d = %llu", n, facto);
    }
 
    
    return 0;
}