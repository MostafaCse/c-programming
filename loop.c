/*
* To display m to n using loop
*/

#include <stdio.h>

int main()
{
    int FirstNumber, SeconNumber, i;
    printf("Enter the value of m & n : ");
    scanf("%d%d", &FirstNumber, &SeconNumber);
    if (FirstNumber < SeconNumber) {
        for (i = FirstNumber; i <= SeconNumber; i++) {
            printf("%d\n", i);
        }
    }
    else {
        for (i = FirstNumber; i >= SeconNumber; i--) {
            printf("%d\n", i);
        }
    }
    return 0;
}
