#include<stdio.h>

int main(){
    char health, add, sex;
    double policy;
    int age;

    
    scanf("%c %d %c %c %lf", &health, &age, &add, &sex, &policy);
   
    if(health == 'E' && age>=25 && age<=35 && add == 'C'){
        if(sex == 'M'){
            if(policy<200000){
            printf("%lf", (policy /1000 )* 4);
            }else
            {
            printf("Policy amount exceed the limit.");
            }
        }else if(sex == 'F'){
            if(policy<10000){
             printf("%lf", (policy /1000 )* 3);
            }else
            {
            printf("Policy amount exceed the limit.");
            }
        }
        else
        {
        printf("You can not be insured.");
        }
    }else if(health == 'P' && age>=25 && age<=35 && add == 'V'){
        if(sex == 'M'){
             if (policy<10000)
        {
            printf("%lf", (policy /1000 )* 6);
        }else
        {
            printf("Policy amount exceed the limit.");
        }

        }
        else
        {
            printf("You can not be insured.");
        }
       

        
    }else if( (health == 'E' || health == 'P') && (add == 'V' || add == 'C') && (sex == 'M' || sex == 'F') ){
        printf("You can not be insured.");
    }
    else
    {
        printf("Input unspecified.");
    }




return 0;
}