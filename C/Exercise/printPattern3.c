#include <stdio.h>

#define SIZE 50

int main() 
{
    int numlist[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int height = 0, i = 1, j = 0;

    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("The pattern is: \n");
    for (i=1; i<=height; i++)
    {
        for (j=0; j<i; j++) printf("%d", numlist[i + j - 1]);
        printf("\n");
    }

    return 0;
}