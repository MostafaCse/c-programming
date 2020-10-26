#include <stdio.h>
int main()
{
    int FirstNumber,SecondNumber,Addition,Subtraction,Multiplication,Division;
    printf("enter the numbers");
    scanf("%d%d",&FirstNumber,&SecondNumber);
    Addition= FirstNumber+SecondNumber;
    Subtraction= FirstNumber-SecondNumber;
    Multiplication= FirstNumber*SecondNumber;
    Division= FirstNumber/SecondNumber;
    printf("sum=%d,sub=%d,mul=%d,div=%d",Addition,Subtraction,Multiplication,Division);

    return 0;
}
