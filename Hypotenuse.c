#include <stdio.h>
#include <math.h>
int main()
{
    double Hight,Width,Result;
    printf("enter the value of lengths\n");
    scanf("%lf%lf",&Hight,&Width);

    Result= sqrt(Hight*Hight+Width*Width);

    printf("The value of hypotenuse is : %lf",Result);

    return 0;

}
