#include <stdio.h>

int main()
{
    int index, max, numArray[10];
    printf("Enter 10 numbers: \n");
    for (index=0; index<10; index++)
        scanf("%d", numArray + index);
    max = *numArray;
    for (index=1; index<10; index++)
    {
        if (*(numArray + index) > max)
            max = *(numArray + index);
    }
    printf("The max value is %d\n", max);
    return 0;
}