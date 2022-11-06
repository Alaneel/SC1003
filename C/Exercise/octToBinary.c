#include <stdio.h>
#include <math.h>

int convertToDec(int num, int base);
int convertFromDec(int num, int base);

int main()
{
    int oct = 0, dec = 0, bin = 0;

    printf("Enter an octal number: \n");
    scanf("%d", &oct);
    dec = convertToDec(oct, 8);
    bin = convertFromDec(dec, 2);
    printf("The equivalent binary number: %d\n", bin);

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