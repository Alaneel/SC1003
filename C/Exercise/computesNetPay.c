#include <stdio.h>

int main()
{
    int numHours = 0;
    double grossPay = 0, tax = 0, netPay = 0;

    printf("Enter hours of work: \n");
    scanf("%d", &numHours);

    if ((numHours >= 0) && (numHours <= 40)) grossPay = 6.00 * numHours;
    else if (numHours > 40) grossPay = 9 * (numHours - 40) + 240;
    else printf("Enter a valid number!\n");

    if (grossPay <= 1000) tax = 0.1 * grossPay;
    else if ((grossPay > 1000) && (grossPay <= 1500)) tax = 0.2 * (grossPay - 1000) + 100;
    else tax = 0.3 * (grossPay - 1500) + 200;

    netPay = grossPay - tax;

    printf("Gross pay=%.2f\n", grossPay);
    printf("Tax=%.2f\n", tax);
    printf("Net pay=%.2f\n", netPay);

    return 0;
}