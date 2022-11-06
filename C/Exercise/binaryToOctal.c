#include <stdio.h>
#include <math.h>

int convertToDec(int num, int base);
int convertFromDec(int num, int base);

int main()
{
    int bin = 0, dec = 0, oct = 0;

    printf("Enter a binary number: \n");
    scanf("%d", &bin);
    dec = convertToDec(bin, 2);
    oct = convertFromDec(dec, 8);
    printf("The equivalent octal number: %d\n", oct);

    return 0;
}

int convertToDec(int num, int base)
{
    if (num == 0 || base == 10) return num;
    else return (num % 10) + base * convertToDec(num / 10, base);
}

int convertFromDec(int num, int base)
{
    if (num == 0) return num;
    else return (num % base) + 10 * convertFromDec(num / base, base);
}