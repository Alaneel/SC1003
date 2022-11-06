#include <stdio.h>

int main()
{
    int i;
    float data, sum = 0;
    printf("Enter 8 numbers: ");
    for (i=0; i<8; i++){
        scanf("%f", &data);
        if (data < 0.0)
            continue;
        sum += data;
    }
    printf("The sum if %f\n", sum);
    return 0;
}