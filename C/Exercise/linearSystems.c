#include <stdio.h>
#include <math.h>

int main()
{
    double a1 = 0, b1 = 0, c1 = 0, a2 = 0, b2 = 0, c2 = 0;
    double x = 0, y = 0;

    printf("Enter a1,b1,c1,a2,b2,c2:\n");
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
    if (a1 * b2 - a2 * b1)
    {
        x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
        y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
        printf("x=%.2f,y=%.2f\n", x, y);
    }
    else
    {
        printf("Denominator is zero!\n");
    }

    return 0;
}