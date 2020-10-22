//Program for Calculating the area of the circle based on user input.

#include <stdio.h>;
int main()
{

    float radius;

    //Taking radius as input from user
    printf("Enter the radius of the circle \n");
    scanf("%f",&radius);

    //Calculating the area of the circle
    float area=radius*radius*3.14;

    //Displaying the Area of the circle
    printf("The area of the circle is %lg", area);

    return 0;
}
