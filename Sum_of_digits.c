/*
* To calculate sum of digits of an integer
*/

#include <stdio.h>

int main()
{
    int Number, Sum = 0;
    printf("Enter an integer : ");
    scanf("%d", &Number);
    while(Number != 0) {
        Sum += (Number % 10);
        Number /= 10;
    }
    printf("Sum of the digits = %d\n", Sum);
    return 0;
}
