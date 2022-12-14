#include <stdio.h>

int platform1D(int ar[], int size);

int main()
{
    int i, b[50], size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++) scanf("%d", &b[i]);
    printf("platform1D(): %d\n", platform1D(b, size));

    return 0;
}

int platform1D(int ar[], int size)
{
    int i = 0, maxcount = 1, count = 1;

    for (i=1; i<size; i++)
    {
        if (ar[i] == ar[i-1]) count++;
        else
        {
            if (count > maxcount) maxcount = count;
            count = 1;
        }
    }

    return maxcount;
}