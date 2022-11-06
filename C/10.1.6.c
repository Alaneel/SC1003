#include <stdio.h>

int main()
{
    int index, max, numArray[10];
    int *ptr;
    ptr = numArray;
    printf("Enter 10 numbers: \n");
    for (index=0; index<10; index++)
        scanf("%d", ptr++); // ptr++ is an excellent idea
    ptr = numArray; // Need to point back to the first element of the array
    max = *ptr;
    for (index=1; index<10; index++)
    {
        if (*ptr > max)
            max = *ptr;
        ptr++;
    }
    printf("The max value is %d\n", max);
    return 0;
}