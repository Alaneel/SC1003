#include <stdio.h> // better if we can use math.h
int main()
{
    float x, result;
    float t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11;
    printf("Enter x: \n");
    scanf("%f", &x);
    t1 = 1;
    t2 = x / 1;
    t3 = (x * x) / (2 * 1);
    t4 = (x * x * x) / (3 * 2 * 1);
    t5 = (x * x * x * x) / (4 * 3 * 2 * 1);
    t6 = (x * x * x * x * x) / (5 * 4 * 3 * 2 * 1);
    t7 = (x * x * x * x * x * x) / (6 * 5 * 4 * 3 * 2 * 1);
    t8 = (x * x * x * x * x * x * x) / (7 * 6 * 5 * 4 * 3 * 2 * 1);
    t9 = (x * x * x * x * x * x * x * x) / (8 * 7 * 6 * 5 * 4 * 3 * 2 * 1);
    t10 = (x * x * x * x * x * x * x * x * x) / (9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1);
    t11 = (x * x * x * x * x * x * x * x * x * x) / (10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1);
    result = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10 + t11;
    printf("Result = %.2f\n", result);
    return 0;
}