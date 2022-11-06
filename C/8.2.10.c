#include <stdio.h>
int main()
{
    int input;
    do {
        printf("Input a number >= 1 and <= 5: ");
        scanf("%d", &input);
        if (input > 5 || input < 1)
            printf("%d is out of range\n", input);
    } while (input > 5 || input < 1);
    printf("Input = %d\n", input);
    return 0;
}