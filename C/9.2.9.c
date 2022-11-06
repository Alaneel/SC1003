#include <stdio.h>
#define INIT_VALUE 999;

int extEvenDigit1(int num);
void extEvenDigit2(int num, int *result);

int main()
{
    int num, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &num);
    result = extEvenDigit1(num);
    printf("extEvenDigit1(): %d\n", result);
    extEvenDigit2(num, &result);
    printf("extEvenDigit2(): %d\n", result);
    return 0;
}

int extEvenDigit1(int num)
{
    int result = 0, number, power = 1;
    while (num > 0)
    {
        number = num % 10;
        if (number % 2 == 0) 
        {
            result += number * power;
            power *= 10;
        }
        num /= 10;
    }
    if (power == 1) return -1;
    return result;
}

void extEvenDigit2(int num, int *result)
{
    *result = 0;
    int number, power = 1;
    while (num > 0)
    {
        number = num % 10;
        if (number % 2 == 0)
        {
            *result += number * power;
            power *= 10;
        }
        num /= 10;
    }
    if (power == 1) *result = -1;
}