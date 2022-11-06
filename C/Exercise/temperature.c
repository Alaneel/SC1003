#include <stdio.h>

int main()
{
    double farenheit = 0, celsius = 0;

    printf("Enter the temperature in degree F:\n");
    scanf("%lf", &farenheit);
    while (farenheit != -1)
    {
        celsius = (farenheit - 32) * 5 / 9;
        printf("Converted degree in C: %.2f\n", celsius);
        printf("Enter the temperature in degree F:\n");
        scanf("%lf", &farenheit);
    }

    return 0;
}