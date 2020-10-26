/*
* To display multiplication table of a given number x
*/

#include <stdio.h>

int main()
{
    int Number, Result, i;
    printf("Enter the value of x : ");
    scanf("%d", &Number);
    for (i = 1; i <= 10; i++) {
        Result = Number * i;
        printf("%d X %2d = %2d\n", Number, i, Result);
    }
    return 0;
}
