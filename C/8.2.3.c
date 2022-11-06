#include <stdio.h>

int main()
{
    float temp;
    printf("Temperature reading: ");
    scanf("%f", &temp);
    if ((temp >= 100.0) && (temp <= 120.0))
        printf("Temperature OK.\n");
    else if (temp < 100.0)
        printf("Temperature too low.\n");
    else
        printf("Temperature too high.\n");
}