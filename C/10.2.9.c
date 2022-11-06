// diagonals2D

#include <stdio.h>
#define SIZE 10

void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum1, int *sum2);

int main()
{
    int ar[SIZE][SIZE], i, j, row, column, sum1 = 0, sum2 = 0;
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &row);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &column);
    printf("Enter the matrix (%dx%d): \n", row, column);
    for (i=0; i<row; i++) {
        for (j=0; j<column; j++)
            scanf("%d", &ar[i][j]);
    }
    diagonals2D(ar, row, column, &sum1, &sum2);
    printf("sum1=%d; sum2=%d\n", sum1, sum2);
    return 0;
}

void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum1, int *sum2)
{
    int i, j;
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
        {
            if (i == j)
                *sum1 += ar[i][j];
        }
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
        {
            if (j == colSize - i - 1)
                *sum2 += ar[i][j];
        }
}