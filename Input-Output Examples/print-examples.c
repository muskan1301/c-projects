#include <stdio.h>

int main()
{
    //Variable declarations

    //integer
    int in;
    //float
    float fl;
    //character
    char ch;
    //double
    double dou;
    //long
    long lo;
    //String
    char str[500];

    //Input using Scanf
    printf("Enter an integer \n");
    scanf("%d", &in);

    printf("Enter a float \n");
    scanf("%f", &fl);

    printf("Enter a double \n");
    scanf("%lf", &dou);

    printf("Enter a long \n");
    scanf("%li", &lo);

    printf("Enter a String \n");
    scanf("%s", &str);

    printf("Enter a char \n");
    scanf(" %c", &ch);

    //Output
    // "\n" is a tag that moves the cursor to the next line.
    printf(" \n The Inputs Are: \n %d \n %f \n %lf \n %li \n %s \n %c \n", in, fl, dou, lo, str, ch);

    return 0;
}
