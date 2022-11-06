#include <stdio.h>

void swapMinMax1D(int ar[], int size);

int main()
{
    int ar[50], i, size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++) scanf("%d", ar+i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++) printf("%d ", *(ar+i));
    printf("\n");

    return 0;
}

void swapMinMax1D(int ar[], int size)
{
    int max = 0, min = 0, i = 0, temp = 0;

    for (i=0; i<size; i++)
    {
        if (ar[i] >= ar[max]) max = i;
        if (ar[i] <= ar[min]) min = i;
    }

    temp = *(ar+max);
    *(ar+max) = *(ar+min);
    *(ar+min) = temp;
}