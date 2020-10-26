#include <stdio.h>
#include <math.h>
int main()
{
    double Values,Temp,Result;
    printf("enter the value of x : ");
    scanf("%lf",&Values);

    Temp= (Values-1)/Values;
    Result= Temp+ (pow(Temp,2))/2+ (pow(Temp,3))/3+ (pow(Temp,4))/4;
    printf("The value of Y is : %lf",Result);
    return 0;
}
