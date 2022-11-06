#include <stdio.h>

int main()
{
    int height = 0, i = 0, j = 0, k = 0;

    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("The pattern is: \n");
    for (i=0; i<height; i++)
    {
        for (j=0; j<height-i-1; j++) printf(" ");
        for (k=0; k<2*i+1; k++)
        {
            if (k<=i) printf("%d", (2*i+1-(i-k)) % 10);
            else printf("%d", (2*i+1-(k-i)) % 10);
        }
        for (j=0; j<height-i-1; j++) printf(" ");
        printf("\n");
    }
    return 0;
}