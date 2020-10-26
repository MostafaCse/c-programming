#include <stdio.h>
int main()
{
    int Year;
    printf("Enter the value of year");
    scanf("%d",&Year);

    if(Year%400==0)
        printf("This is not a leap year",Year);

    else if (Year%4==0){
        Year%100==1;
        printf("This is leap year",Year); }

    else
        printf("This is not a leap year");
        return 0;

}

