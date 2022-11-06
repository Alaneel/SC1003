#include <stdio.h>
#define N 20

int remDuplicates(int a[], int size);

int main()
{
    int a[N], i, size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++) scanf("%d", &a[i]);
    size = remDuplicates(a, size);
    printf("remDuplicates(): \n");
    for (i=0; i<size; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}

int remDuplicates(int a[], int size)
{
    int i = 0, j = 0;

    a[size] = '\0'; 
    while (a[i] != '\0')
    {
        if (a[i+1] == a[i])
        {
            for (j=i+1; j<=size; j++)
            {
                a[j] = a[j+1];
            }
            size--;
            i--;
        }
        i++;
    }

    return size;
}