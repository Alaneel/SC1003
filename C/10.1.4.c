#include <stdio.h>
#define MTHS 12

int main()
{
    int i, days[MTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, *day_ptr;
    for (i=0; i<MTHS; i++)
    {
        day_ptr = days + i;
        printf("Element %d: %d\n", i, *day_ptr);
    }
    return 0;
}