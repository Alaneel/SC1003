#include <stdio.h>

float areaOfCircle(float);

int main()
{
    float answer;
    answer = areaOfCircle(2.5);
    printf("Area is %.1f\n", answer);
    return 0;
}

float areaOfCircle(float radius){
    const float pi = 3.14;
    float area;

    area = pi * radius * radius;
    return area;
}