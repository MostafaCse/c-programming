#include <stdio.h>

int main()
{
    int Number_length, i, j, Temp;
    int Number[100];
    printf("How many numbers do you want to sort ? : ");
    scanf("%d", &Number_length);
    printf("Enter %d values : ", Number_length);
    for (i = 0; i < Number_length; i++) {
        scanf("%d", (Number + i));
    }
    printf("Before Sorting\n");
    for (i = 0; i < Number_length; i++) {
        printf("%d\t", *(Number + i));
    }
    for (i = 0; i < Number_length - 1; i++) {
        for (j = i + 1; j < Number_length; j++) {
            if (*(Number + i) > *(Number + j)) {
                Temp = *(Number + i);
                *(Number + i) = *(Number + j);
                *(Number + j) = Temp;
            }
        }
    }
    printf("\nAfter Sorting\n");
    printf("Ascending :\t");
    for (i = 0; i < Number_length; i++) {
        printf("%d\t", *(Number + i));
    }
    printf("\nDescending :\t");
    for (i = Number_length - 1; i >= 0; i--) {
        printf("%d\t", *(Number + i));
    }
    return 0;
}

