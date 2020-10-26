/*
* To calculate factorial of n without recursion
*/

#include <stdio.h>

int main()
{
    unsigned long long Number, i, Total = 1;
    printf("Enter the value of n : ");
    scanf("%llu", &Number);
    for (i = Number; i >= 1; i--) {
        Total *= i;
    }
    printf("%llu! = %llu\n", Number, Total);
    return 0;
}
