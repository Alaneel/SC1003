#include <stdio.h>

void minMax1(int a[5][5], int *min, int *max);
void minMax2(int a[5][5], int *min, int *max);

int main()
{
    int A[5][5];
    int i, j;
    int min, max;

    printf("Enter your matrix data (5x5): \n");
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
            scanf("%d", &A[i][j]);
    minMax1(A, &min, &max);
    printf("minMax1(): min = %d, max = %d\n", min, max);
    minMax2(A, &min, &max);
    printf("minMax2(): min = %d, max = %d\n", min, max);
    return 0;
}

void minMax1(int a[5][5], int *min, int *max)
{
    int i, j;

    *min = a[0][0];
    *max = a[0][0];
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
        {
            if (a[i][j] > *max)
                *max = a[i][j];
            else if (a[i][j] < *min)
                *min = a[i][j];
        }
}

void minMax2(int a[5][5], int *min, int *max)
{
    int i, j;
    int *p;

    p = *a;
    *min = *p;
    *max = *p;
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
        {
            if (*p > *max)
                *max = *p;
            else if (*p < *min)
                *min = *p;
            p++;
        }
}