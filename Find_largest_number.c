#include <stdio.h>
int main()
{
    int FirstNumber, SecondNumber, ThirdNumber;
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &FirstNumber,&SecondNumber,&ThirdNumber);

    if(FirstNumber>SecondNumber && FirstNumber>ThirdNumber)
        printf("a is the largest number %d\n", FirstNumber);
  else  if (SecondNumber>ThirdNumber && SecondNumber>FirstNumber)
        printf("b is the largest number %d\n", SecondNumber);

    else printf(" c is the largest number %d\n", ThirdNumber);

    return 0;

}
