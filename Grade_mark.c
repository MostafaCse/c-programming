#include <stdio.h>
int main()
{
    int Number;
    printf("Enter your marks");
    scanf("%d",&Number);

    if (Number>=80 && Number<=100)
        printf("Your grade is A");

    else if(Number>=65 && Number<=79)
        printf("Your grade is B");

    else if(Number>=50 && Number<=64)
        printf("Your grade is C");

    else if(Number>=40 && Number<=49)
        printf("Your grade is D");
    else
        printf("Your grade is F");
    return 0;




}
