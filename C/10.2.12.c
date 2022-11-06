#include <stdio.h>
#define SIZE 10

void transpose(int ar[SIZE][SIZE], int rowSize, int colSize);

int main()
{
    int rowSize, colSize, ar[SIZE][SIZE], i, j;
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
    {
        for (j=0; j<colSize; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    transpose(ar, rowSize, colSize);
    printf("Transposed matrix: \n");
    for (i=0; i<rowSize; i++)
    {
        for (j=0; j<colSize; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}

void transpose(int ar[SIZE][SIZE], int rowSize, int colSize)
{
    int i, j, temp;
    for (i=0; i<rowSize; i++)
    {
        for (j=0; j<i+1; j++)
        {
            temp = ar[j][i];
            ar[j][i] = ar[i][j];
            ar[i][j] = temp;
        }
    }
}