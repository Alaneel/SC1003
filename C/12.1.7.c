#include <stdio.h>

struct account {
    char bank[20];
    float current;
    float saving;
};

float sum(struct account);

int main()
{
    struct account John = {"OCBC Bank", 1000.43, 4000.87};
    printf("The account has a total of %.2f\n", sum(John));
    return 0;
}

float sum(struct account money)
{
    return (money.current + money.saving);
}