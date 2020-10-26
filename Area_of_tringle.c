#include <stdio.h>
#include <math.h>
int main()
{
    double A,B,C,Average,Area;
    printf("enter the values");
    scanf("%lf%lf%lf",&A,&B,&C);

    Average = (A+B+C)/2;
    Area = sqrt(Average*(Average-A)*(Average-B)*(Average-C));
    printf("The value of Area is: %lf",Area);
    return 0;

}

