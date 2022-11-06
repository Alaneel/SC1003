#include <stdio.h>
#define INIT_VALUE 999
#define SIZE 50

int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);

    return 0;
}

int extEvenDigits1(int num)
{
    int numlist[SIZE], i = 0, j = 0, result = 0;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            numlist[i] = (num % 10);
            i++;
        }
        num /= 10;
    }

    if (i == 0) return -1;

    for (j=i-1; j>=0; j--)
    {
        result = result * 10 + numlist[j];
    }

    return result;
}

void extEvenDigits2(int num, int *result)
{
    int numlist[SIZE], i = 0, j = 0;

    *result = 0;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            numlist[i] = (num % 10);
            i++;
        }
        num /= 10;
    }

    if (i == 0)
    {
        *result = -1;
        return;
    }

    for (j=i-1; j>=0; j--)
    {
        *result = *result * 10 + numlist[j];
    }
}