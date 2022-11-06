#include <stdio.h>

int main()
{
    int i, j, width;

    printf("Please enter pattern width: ");
    scanf("%d", &width);

    for (i=1; i<width+1; i++){
        for(j=0; j<i; j++)
            printf("*");
        printf("\n");
    }
    for (i=width-1; i>0; i--){
        for(j=0; j<i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}