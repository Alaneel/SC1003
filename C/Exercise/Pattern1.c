#include <stdio.h>

int main()
{
    int height = 0, i = 0, j = 0;

    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("The pattern is: \n");
    for (i=0; i<height; i++)
    {
        for (j=0; j<height-i-1; j++) printf(" ");
        for (j=0; j<2*i+1; j++)
        {
            printf("*");
        }
        for (j=0; j<height-i-1; j++) printf(" ");
        printf("\n");
    }

    return 0;
}