/*
* To calculate GCD of two integers
*/

#include <stdio.h>

int main()
{
    int a, b, FirstNumber, SecondNumber, Temp, gcd;
    printf("Enter two integers : ");
    scanf("%d%d", &FirstNumber, &SecondNumber);

    // putting larger value into x and smaller value into y if x is less than y
    if (FirstNumber < SecondNumber) {
        Temp = FirstNumber;
        FirstNumber = SecondNumber;
        SecondNumber = Temp;
    }

    // copying values for later purpose
    a = FirstNumber;
    b = SecondNumber;

    while (b != 0) {
        a %= b;
        Temp = a;
        a = b;
        b = Temp;
    }
    gcd = a;
    printf("The GCD of %d and %d is %d\n", FirstNumber, SecondNumber, gcd);
    return 0;
}
