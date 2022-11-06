#include <stdio.h>

int main()
{
    int array[3][3] = {
        {5, 10, 15},
        {10, 20, 30},
        {20, 40, 60}
    };
    int row, column, sum;

    for (row=0; row<3; row++)
    {
        sum = 0;
        for (column=0; column<3; column++)
            sum += array[row][column];
        printf("Sum of row %d is %d\n", row, sum);
    }

    for (column=0; column<3; column++)
    {
        sum = 0;
        for (row=0; row<3; row++)
            sum += array[row][column];
        printf("Sum of column %d is %d\n", column, sum);
    }
    return 0;
}