#include <stdio.h>

int main()
{
    int i = 0, j = 0, height = 0;

    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("The pattern is: \n");
    for (i=0; i<height; i++)
    {
        for (j=0; j<height-i-1; j++) printf(" ");
        for (j=0; j<2*i+1; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0) printf("+");
                else printf("=");
            }
            else
            {
                if (j % 2 == 0) printf("=");
                else printf("+");
            }
        }
        for (j=0; j<height-i-1; j++) printf(" ");
        printf("\n");
    }

    return 0;
}