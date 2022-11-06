#include <stdio.h>
#include <math.h>

int convert(int num, int base);

int main()
{
    int num = 0;

    printf("Enter an octal number: \n");
    scanf("%d", &num);
    printf("The equivalent decimal number: %d\n", convert(num, 8));
    return 0;
}

int convert(int num, int base)
{
    if (num == 0 || base == 10) return num;
    return (num % 10) + base * convert(num / 10, base);
}