#include <stdio.h>
#define SIZE 10

void upper_triangular(int ar[SIZE][SIZE], int rowSize, int colSize);

int main()
{
    int rowSize, colSize, ar[SIZE][SIZE], i, j, count;
    printf("Enter row size of the matrix: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the matrix: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
    {
        for (j=0; j<colSize; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    upper_triangular(ar, rowSize, colSize);
    printf("Upper triangular matrix: \n");
    for (i=0; i<rowSize; i++)
    {
        for (j=0; j<colSize; j++)
        {
            printf("%2d", ar[i][j]);
        }
        printf("\n");
    }
}

void upper_triangular(int ar[SIZE][SIZE], int rowSize, int colSize)
{
    int i, j, sum;
    for (j=0; j<colSize-1; j++)
    {
        sum = 0;
        for (i=j; i<rowSize; i++)
        {
            sum += ar[i][j];
            if (i != j)
                ar[i][j] = 0;
        }
        ar[j][j] = sum;
    }
}