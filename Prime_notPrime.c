/*
* To determine prime and non-prime
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int Number, i, Root, is_prime = 1;

    printf("Enter an integer : ");
    scanf("%d", &Number);
    Root = sqrt(Number);
    for (i = 2; i <= Root; i++) {
        if (Number % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (Number != 1 && is_prime == 1) {
        printf("%d is a prime number\n", Number);
    }
    else {
        printf("%d is not a prime number\n", Number);
    }
    return 0;
}
