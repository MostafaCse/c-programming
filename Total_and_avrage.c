#include <stdio.h>
int main()
{
    float FirstNumber,SecondNumber,ThirdNumber,Total,Average;
    printf("enter the numbers");
    scanf("%f%f%f",&FirstNumber,&SecondNumber,&ThirdNumber);

    Total = FirstNumber+SecondNumber+ThirdNumber;
    Average = (FirstNumber+SecondNumber+ThirdNumber)/3;

    printf("the total is=%f,average is=%f",Total,Average);

    return 0;

}
