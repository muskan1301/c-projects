#include<stdio.h>
int main(void)
{
    int year=0,i_cost,profit;
        double t1,t2,interest;

    scanf("%d%d", &i_cost,&profit);
    if(i_cost>=100 && profit>=100 && i_cost<=1000 && profit<=1000)
    { t2=i_cost;

    while(1)
    {
        year++;
        t1=profit*year-(i_cost-100);
        interest=t2*0.12;
        t2=t2+interest;
        if(t2<t1)
        {
            year--;
            break;
        }
    }
    printf("Minimum life of machine %d years", year);}
    else
        printf("Outside the range");


    return 0;
}