#include <stdio.h>
#define SIZE 10

int main()
{
    long int price = 0;
    int category = 0;
    double finalPrice = 0;
    int COE[SIZE] = {70000, 80000, 23000, 600};

    printf("Please enter the list price:\n");
    scanf("%ld", &price);
    printf("Please enter the category:\n");
    scanf("%d", &category);

    price *= 0.9;
    if (price > 100000) price = (price - 100000) * 0.10 + price * 1.03;
    else price *= 1.03;
    finalPrice = price + COE[category - 1];

    printf("Total price is $%.2f", finalPrice);
    
    return 0;
}