#include <stdio.h>

int main()
{
    int boy, girl, total;
    double percent_boy = 0.0, percent_girl = 0.0;

    printf("Enter the number of boys: ");
    scanf("%d", &boy);
    printf("Enter the number of girls: ");
    scanf("%d", &girl);

    total = boy + girl;
    percent_boy = ((double) boy / total) * 100;
    percent_girl = ((double) girl / total) * 100;

    printf("Boys: %.2f\n", percent_boy);
    printf("Girls: %.2f\n", percent_girl);
    return 0;
}