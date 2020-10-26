

#include <stdio.h>

int main()
{
    int row, col, i, j, Sum;
    int Matrix[50][50];
    printf("Number of rows : ");
    scanf("%d", &row);
    printf("Number of columns : ");
    scanf("%d", &col);

    printf("Enter %d values : ", row * col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &Matrix[i][j]);
        }
    }
    printf("Original Matrix\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%3d ", Matrix[i][j]);
        }
        printf("\n");
    }

    printf("Original Matrix with rows and columns sum\n");
    for (i = 0; i < row; i++) {
        Sum = 0;
        for (j = 0; j < col; j++) {
            Sum = Sum + Matrix[i][j];
            printf("%3d ", Matrix[i][j]);
        }
        printf("%3d\n", Sum);
    }

    for (j = 0; j < col; j++) {
        Sum = 0;
        for (i = 0; i < row; i++) {
            Sum = Sum + Matrix[i][j];
        }
        printf("%3d ", Sum);
    }
    return 0;
}
