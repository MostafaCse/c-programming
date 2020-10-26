/*
* Find sum and average of the series :
* 1 + 4 + 7 + ... + n
*/


#include <stdio.h>

int main()
{
    int Number, i, Sum = 0, Count = 0;
    double Average;
    printf("Enter the value of n : ");
    scanf("%d", &Number);
    for (i = 1; i <= Number; i += 3) {
        Sum += i;
        Count++;
    }
    Average = (double) Sum / Count;
    printf("Sum = %d\nAverage = %.2lf\n", Sum, Average);
    return 0;
}
