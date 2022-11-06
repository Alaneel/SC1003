#include <stdio.h>

int main()
{
    int i = 0, count = 1;
    double num = 0, tmp = 1, sum = 1;

    printf("Enter a number: \n");
    scanf("%lf", &num);
    for (i=0; i<20; i++)
    {
        tmp *= num * (-1) / count;
        sum += tmp;
        count++;
    }
    printf("Result = %.2f\n", sum);

    return 0;
}