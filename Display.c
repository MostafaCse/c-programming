/*
* To display
* 1
* 22
* 333
* ....
*/

#include <stdio.h>

int main()
{
    int i, j, Numbers;
    printf("Enter the value of n : ");
    scanf("%d", &Numbers);
    for (i = 1; i <= Numbers; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
