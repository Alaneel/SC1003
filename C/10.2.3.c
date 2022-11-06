#include <stdio.h>

int sum_all_rows(int array[][3]);
int sum_all_columns(int array[][3]);

int main()
{
    int ar[3][3] = {
        {5, 10, 15},
        {10, 20, 30},
        {20, 40, 60}
    };
    int total_row, total_column;
    total_row = sum_all_rows(ar);
    total_column = sum_all_columns(ar);
    printf("The sum of all elements in rows is %d\n", total_row);
    printf("The sum of all elements in columns is %d\n", total_column);
    return 0;
}

int sum_all_rows(int array[][3])
{
    int row, column;
    int sum = 0;
    for (row=0; row<3; row++)
    {
        for (column=0; column<3; column++)
            sum += array[row][column];
    }
    return sum;
}

int sum_all_columns(int array[][3])
{
    int row, column;
    int sum = 0;
    for (column=0; column<3; column++)
    {
        for (row=0; row<3; row++)
            sum += array[row][column];
    }
    return sum;
}