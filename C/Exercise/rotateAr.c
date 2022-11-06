#include <stdio.h>
#define N 20

int main()
{
    int a[N], i, j, k, m, tmp;
    int size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (j=0; j<size; j++)
    {
        tmp = a[size-1];
        for (m=size-1; m>=1; m--) a[m] = a[m-1];
        a[0] = tmp;

        for (k=0; k<size; k++)
        {
            printf("%d", a[k]);
        }
        printf("\n");
    }

    return 0;
}