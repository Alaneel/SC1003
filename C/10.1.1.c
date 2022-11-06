#include <stdio.h>
#define MTHS 12

int main()
{
    int i;
    int days[MTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (i=0; i<MTHS; i++)
        printf("Month %d has %d days \n", i+1, days[i]);
    return 0;
}