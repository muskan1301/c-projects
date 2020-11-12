#include<stdio.h>
int main()
{

    float rad,height;
    printf("Enter the Radius of the cylinder \n");
    scanf("%f",&rad);
    printf("Enter the Height of the cylinder \n");
    scanf("%f",&height);

    float vol=3.14*rad*rad*height;
    printf("The Volume of the cylinder is \n%.3f",vol);

    return 0;
}
