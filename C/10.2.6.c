#include <stdio.h>

int sum(int a[], int n);

int main()
{
    int ar[6] = {1, 2, 3, 4, 5, 6};
    int total;
    printf("Array size is %d\n", sizeof(ar) / sizeof(ar[0]));
    total = sum(ar, 6);
    printf("Total: %d\n", total);
    return 0;
}

int sum(int a[], int n)
{
    int i, total = 0;
    printf("Size of a = %d\n", sizeof(a));
    for (i=0; i<n; i++)
        total += a[i];
    return total;
}