// digitValue

#include <stdio.h>

int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);

int main()
{
    int num, k, result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Enter the digit position: \n");
    scanf("%d", &k);
    result = digitValue1(num, k);
    printf("digitValue1(): %d\n", result);
    digitValue2(num, k, &result);
    printf("digitValue2(): %d\n", result);
    return 0;
}

int digitValue1(int num, int k)
{
    int i, result;
    for (i=0; i<k; i++)
    {
        result = num % 10;
        num /= 10;
    }
    return result;
}

void digitValue2(int num, int k, int *result)
{
    int i;
    for (i=0; i<k; i++)
    {
        *result = num % 10;
        num /= 10;
    }
}