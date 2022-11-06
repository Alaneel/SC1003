#include <stdio.h>
int main()
{
    int i = 0, j = 0, height = 0;
    
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("The pattern is: \n");
    for (i=0; i<height; i++)
    {
        for (j=0; j<height-i-1; j++) printf("*");
        for (j=height-i-1; j<height; j++) printf("=");
        printf("\n");
    }

    return 0;
}