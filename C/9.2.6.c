// power

#include <stdio.h>

float power1(float num, int p);
void power2(float num, int p, float *result);

int main()
{
    int p;
    float num, result;
    printf("Enter the number and power: \n");
    scanf("%f %d", &num, &p);
    result = power1(num, p);
    printf("power1(): %.2f\n", result);
    power2(num, p, &result);
    printf("power2(): %.2f\n", result);
    return 0;
}

float power1(float num, int p)
{
    float result = 1;
    if (p == 0)
        return 1;
    else if (p > 0) {
        while (p--)
            result *= num;
    }
    else {
        while (p++)
            result *= 1.0 / num;
    }
    return result;
}

void power2(float num, int p, float *result)
{
    *result = 1;
    if (p == 0)
        *result = 1;
    else if (p > 0) {
        while (p--)
            *result *= num;
    }
    else {
        while (p++)
            *result *= 1.0 / num;
    }
}