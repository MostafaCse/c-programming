#include <stdio.h>

int main()
{
    int row, col, i, j;
    int MatrixA[10][10], MatrixB[10][10], MatirxResult[10][10];
    printf("Number of rows : ");
    scanf("%d", &row);
    printf("Number of columns : ");
    scanf("%d", &col);

    printf("Enter %d values for Table A : ", row * col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &MatrixA[i][j]);
        }
    }
    printf("Enter %d values for Table B : ", row * col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &MatrixB[i][j]);
        }
    }
    printf("A + B\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            MatirxResult[i][j] = MatrixA[i][j] + MatrixB[i][j];
            printf("%3d ", MatirxResult[i][j]);
        }
        printf("\n");
    }
    return 0;
}
