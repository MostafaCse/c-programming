#include <stdio.h>
int main()
{
    float Fahrenheit,Result;
    printf("enter the Fahrenheit\n");
    scanf("%f",&Fahrenheit);
    Result = (5.0/9)*(Fahrenheit-32);
    printf("The value of Celsius is:%f",Result);

    return 0;
}
