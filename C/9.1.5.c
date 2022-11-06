#include <stdio.h>
#include <math.h>

double distance(double, double);

int main()
{
    double dist;
    double x = 2.0, y = 4.5, a = 3.0, b = 5.5;
    dist = distance(2.0, 4.5);
    printf("The dist is %f\n", dist);
    dist = distance(x * y, a * b);
    printf("The dist is %f\n", dist);
    return 0;
}

double distance(double x, double y)
{
    return sqrt(x * x + y * y);
}