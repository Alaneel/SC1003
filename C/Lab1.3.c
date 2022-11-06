// printPattern

#include <stdio.h>
int main()
{
    int i, j, height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern: \n");
    for (i=1; i<height+1; i++)
    {
        for (j=0; j<i; j++)
        {
            switch (i % 3)
            {
                case 1:
                    printf("1");
                    break;
                case 2:
                    printf("2");
                    break;
                case 0:
                    printf("3");
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}