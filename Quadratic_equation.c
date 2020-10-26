#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,Result;
    printf("enter the three numbers\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    Result= (-b+sqrt(b*b-4*a*c))/(2*a);
    printf("The value of x for positive sign is : %.2lf\n",Result);
    Result= (-b-sqrt(b*b-4*a*c))/(2*a);
    printf("The value of x for negative sign is : %.2lf\n",Result);
    return 0;

}

