// Important

#include <stdio.h>
#include <math.h>

int convertFromDec(int num, int base);

int main()
{
    int dec = 0, oct = 0;

    printf("Enter a decimal number: \n");
    scanf("%d", &dec);
    oct = convertFromDec(dec, 8);
    printf("The equivalent octal number: %d\n", oct);
    return 0;
}

int convertFromDec(int num, int base)
{
    if (num == 0 || base == 10) return num;
    else return (num % base) + 10 * convertFromDec(num / base, base);
}