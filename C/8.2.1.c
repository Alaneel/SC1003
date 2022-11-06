#include <stdio.h>

int main()
{
    int num;
    printf("Give me a number from 1 to 10: ");
    scanf("%d", &num);
    if (num > 5)
        printf("Your number is larger than 5.\n");
    printf("%d was the number you entered.\n", num);
    return 0;
}