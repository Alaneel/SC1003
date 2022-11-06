// callDistance

#include <stdio.h>
#include <math.h>

void inputXY(float *x1, float *y1, float *x2, float *y2);
float callDistance1(float x1, float y1, float x2, float y2);
void callDistance2(float x1, float y1, float x2, float t2, float *distance);

int main()
{
    float x1, y1, x2, y2, distance;
    inputXY(&x1, &y1, &x2, &y2);
    distance = callDistance1(x1, y1, x2, y2);
    printf("callDistance1(): %.2f\n", distance);
    callDistance2(x1, y1, x2, y2, &distance);
    printf("callDistance2(): %.2f\n", distance);
    return 0;
}

void inputXY(float *x1, float *y1, float *x2, float *y2)
{
    printf("Input x1, y1, x2, y2: \n");
    scanf("%f %f %f %f", x1, y1, x2, y2);
}

float callDistance1(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void callDistance2(float x1, float y1, float x2, float y2, float *distance)
{
    *distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}