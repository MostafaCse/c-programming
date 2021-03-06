/*
* To calculate factorial of n using recursion
*/

#include <stdio.h>

typedef unsigned long long ULL;

ULL fact(ULL x);

int main()
{
    ULL Value, result;
    printf("Enter the value of n : ");
    scanf("%llu", &Value);
    result = fact(Value);
    printf("%llu! = %llu\n", Value, result);
    return 0;
}

ULL fact(ULL x)
{
    ULL total = 1;
    if (x > 1) {
        total = x * fact(x - 1);
    }
    else {
        return total;
    }
}

