#include <stdio.h>

int maximum(int table[], int n);

int main()
{
    int max, index, n;
    int numArray[10];

    printf("Enter the number of values: \n");
    scanf("%d", &n);
    printf("Enter %d values: \n", n);
    for (index=0; index<n; index++)
        scanf("%d", &numArray[index]);
    
    max = maximum(numArray, n); // Important
    printf("The maximum value is %d\n", max);
    return 0;
}

int maximum(int table[], int n)
{
    int index, max;
    max = *table;
    for (index=1; index<n; index++)
    {
        table++;
        if (*table > max)
            max = *table;
    }
    return max;
}