#include <stdio.h>

#define SIZE 50

int main()
{
    char charlist[SIZE] = {'A', 'B', 'A', 'B', 'A', 'B', 'A', 'B', 'A', 'B', 'A', 'B', 'A', 'B', 'A', 'B', 'A', 'B'};
    int num = 0, i = 0, j = 0;

    printf("Enter the height: \n");
    scanf("%d", &num);
    printf("The pattern is: \n");
    for (i=0; i<num; i++)
    {
        for (j=0; j<=i; j++) printf("%c", charlist[i + j]);
        printf("\n");
    }

    return 0;
}