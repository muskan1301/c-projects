#include<stdio.h> 

int fib(int n) 
{ 
    if(n<=1)
         return n; 
   return fib(n-1) + fib(n-2); 
    // Write logic here
  
} 

int main () 
{ 
int n;
  scanf("%d",&n);
    if(n>=1 && n<=15)
    {printf("%d", fib(n)); }
    else
        printf("Outside the range");
return 0; 
}