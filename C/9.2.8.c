#include <stdio.h>

int countEvenDigit1(int number);
void countEvenDigit2(int number, int *count);

int main()
{
    int number, count;
    printf("Enter a number: \n");
    scanf("%d", &number);
    count = countEvenDigit1(number);
    printf("countEvenDigit1(): %d\n", count);
    countEvenDigit2(number, &count);
    printf("countEvenDigit2(): %d\n", count);
    return 0;
}

int countEvenDigit1(int number)
{
    int count = 0;
    while (number != 0) {
        if ((number % 10) % 2 == 0)
            count += 1;
        number /= 10;
    }
    return count;
}

void countEvenDigit2(int number, int *count)
{
    int num;
    *count = 0;
    while (number != 0) {
        if ((number % 10) % 2 == 0)
            *count += 1;
        number /= 10;
    }
}