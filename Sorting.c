#include <stdio.h>

int main()
{
    int Number, i, j, Temp;
    int Data[100];
    printf("How many numbers do you want to sort ? : ");
    scanf("%d", &Number);
    printf("Enter %d values : ", Number);
    for (i = 0; i < Number; i++) {
        scanf("%d", &Data[i]);
    }
    printf("Before Sorting\n");
    for (i = 0; i < Number; i++) {
        printf("%d\t", Data[i]);
    }
    for (i = 0; i < Number - 1; i++) {
        for (j = i + 1; j < Number; j++) {
            if (Data[i] > Data[j]) {
                Temp = Data[i];
                Data[i] = Data[j];
                Data[j] = Temp;
            }
        }
    }
    printf("\nAfter Sorting\n");
    printf("Ascending :\t");
    for (i = 0; i < Number; i++) {
        printf("%d\t", Data[i]);
    }
    printf("\nDescending :\t");
    for (i = Number - 1; i >= 0; i--) {
        printf("%d\t", Data[i]);
    }
    return 0;
}
