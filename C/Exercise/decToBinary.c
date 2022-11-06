#include <stdio.h>
#include <math.h>

int convertFromDec(int num, int base);

int main()
{
    int dec = 0, bin = 0;
    printf("Enter a decimal number: \n");
    scanf("%d", &dec);
    bin = convertFromDec(dec, 2);
    printf("The equivalent binary number: %d\n", bin);
    return 0;
}

int convertFromDec(int num, int base)
{
    if (num == 0 || base == 10) return num;
    else return (num % base) + 10 * convertFromDec(num / base, base);
}