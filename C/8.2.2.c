#include <stdio.h>

int main()
{
    int num1, num2, max;
    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        max = num1;
    else
        max = num2;
    printf("The maximum of the two is %d\n", max);
    return 0;
}