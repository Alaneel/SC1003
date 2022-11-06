#include <stdio.h>

int main()
{
    int ar[3][3] = {
        {5, 10, 15},
        {10, 20 ,30},
        {20, 40, 60}
    };
    int i, j;
    int *ptr;
    ptr = *ar;

    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            printf("%d\n", ar[i][j]);

    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            printf("%d\n", *(*(ar + i)+j));

    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            printf("%d\n", *ptr++);

    return 0;
}