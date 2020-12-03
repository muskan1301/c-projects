#include <stdio.h>
#include <stdlib.h>

void factorial(){
    int a,i,fac =1;
    scanf("%d", &a);
     if(a>=1 && a<= 50){
         for(i=2;i<=a;i++){
        fac *=i;
    }
    printf("Factorial value is %d\n", fac);
        }else{
            printf("Outside the range\n");
            
        }
    
}
void prime(){
    int b,i,c=0;
    scanf("%d", &b);
    if(b>=1 && b<= 50){
        
        for(i=2;i<=b/2;i++){
        if(b%i==0){
            c++;
            break;
            
        }
    }
    if(c > 0){
        printf("Not prime\n");
    }
    else{
        printf("Prime number\n");
    }
        
        }else{
            printf("Outside the range\n");
           
        }
    
    
}
void oddeven(){
    int a;
    scanf("%d", &a);
    if(a>=1 && a<= 50){
        if(a%2==0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
        }else{
            printf("Outside the range\n");
            
        }
    
}
int main() {
    int b = 1;
    while(b){
        int a;
        scanf("%d", &a);
        
             switch(a){
            case 1: factorial();break;
            case 2: prime();break;
            case 3: oddeven();break;
            case 4: b = 0;break;
            }
        
       
    }
}