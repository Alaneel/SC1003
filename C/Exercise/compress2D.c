#include <stdio.h>
#define SIZE 100

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);

int main()
{
    int data[SIZE][SIZE];
    int i, j;
    int rowSize, colSize;

    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++) for(j=0; j<colSize; j++) scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);

    return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int count = 1, i = 0, j = 1;

    for (i=0; i<rowSize; i++)
    {
        if (data[i][0] == 1) printf("1");
        else printf("0");

        for (j=1; j<colSize; j++)
        {
            if (data[i][j] == data[i][j-1]) count++;
            else
            {
                printf(" %d", count);
                if (data[i][j] == 1) printf(" 1");
                else printf(" 0");
                count = 1;
            }
        }

        printf(" %d", count);
        count = 1;
        printf("\n");
    }
}