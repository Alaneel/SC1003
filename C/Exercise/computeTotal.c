#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int main()
{
    int numLines = 0, numNums = 0, countLines = 1, countNums = 0, temp = 0, total = 0;

    printf("Enter number of lines:\n");
    scanf("%d", &numLines);
    for (countLines=1; countLines<=numLines; countLines++)
    {
        total = 0;
        printf("Enter line %d:\n", countLines);
        scanf("%d", &numNums);
        for (countNums = 0; countNums < numNums; countNums++)
        {
            scanf("%d", &temp);
            total += temp;
        }
        printf("Total: %d\n", total);
    }

    return 0;
}