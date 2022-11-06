#include <stdio.h>

int max3(int, int, int);
int max2(int, int);

int main()
{
    int x, y, z;
    printf("input three integers => ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Maximum of the 3 is %d\n", max3(x, y, z));
    return 0;
}

int max3(int i, int j, int k)
{
    printf("Find the max in %d, %d and %d\n", i, j, k);
    return max2(max2(i, j), max2(j, k));
}

int max2(int h, int k)
{
    printf("Find the max of %d and %d\n", h, k);
    return h > k ? h : k;
}