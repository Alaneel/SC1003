#include <stdio.h>

int main()
{
    int num = 0, i = 1, j = 1;

    printf("Enter a number (between 1 and 9):\n");
    scanf("%d", &num);

    printf("Multiplication Table:\n");
    printf(" ");
    for (i=1; i<=num; i++) printf(" %d", i);
    printf("\n");
    for (i=1; i<=num; i++)
    {
        printf("%d", i);
        for (j=1; j<=i; j++) printf(" %d", i * j);
        printf("\n");
    }

    return 0;
}