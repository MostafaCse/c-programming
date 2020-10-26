/*
* To find sum and average of n numbers
*/

#include <stdio.h>

int main()
{
    int LengthNumber, i, Number, Sum = 0;
    double Average;
    printf("Enter value of n : ");
    scanf("%d", &LengthNumber);
    printf("Enter %d values : ", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &Number);
        Sum += Number;
    }
    Average = (double) Sum / n;
    printf("Sum = %d\nAverage = %.2lf\n", Sum, Average);
    return 0;
}
