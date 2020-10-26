#include <stdio.h>
#define PI 3.1416
int main()
{
    float Radious,Area,Result;
    printf("enter the value of radious\n");
    scanf("%f",&Radious);
    Area = PI*Radious*Radious;
    printf("The value of area is : %.3f\n",Area);
    Result = 2*PI*Radious;
    printf("the value of circle = %.3f\n", Result);

    return 0;
}

