#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int convert(int num, int base);
int octStrToDec(char *str);

int main()
{
    char str[20], *sp;
    int num;

    printf("Enter an octal number: \n");
    scanf("%s", str);
    num = octStrToDec(str);
    printf("octStrToDec(): %d\n", num);

    return 0;
}

int convert(int num, int base)
{
    if (num == 0 || base == 10) return num;
    else return num % 10 + base * convert(num / 10, base);
}

int octStrToDec(char *str)
{
    int oct = 0, dec = 0;

    oct = atoi(str);

    dec = convert(oct, 8);

    return dec;
}