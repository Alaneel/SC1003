#include <stdio.h>

float sum(float x, float y);

struct account {
    char bank[20];
    float current;
    float saving;
};

int main()
{
    struct account John = {"OCBC Bank", 1000.43, 4000.87};
    printf("The account has a total of %.2f\n", sum(John.current, John.saving));
    return 0;
}

float sum(float x, float y)
{
    return (x+y);
}