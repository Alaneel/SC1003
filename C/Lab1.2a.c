#include <stdio.h>
int main()
{
    int i, j, num_lines;
    float data, sum, average;
    printf("Enter number of lines: \n");
    scanf("%d", &num_lines);
    for (i=1; i<num_lines+1; i++)
    {
        sum = 0;
        printf("Enter line %d (end with -1): \n", i);
        for (j=1;;j++)
        {
            scanf("%f", &data);
            if (data == -1)
                break;
            sum += data;
        }
        average = sum / (j - 1);
        printf("Average = %.2f\n", average);
    }
    return 0;
}