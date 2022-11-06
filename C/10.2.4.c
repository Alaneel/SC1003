#include <stdio.h>

void display1(int *ptr, int size);
void display2(int ar[], int size);

int main()
{
    int array[2][4] = {0, 1, 2, 3, 4, 5, 6, 7};
    int i;

    for (i=0; i<2; i++) // as 2-D array
    {
        display1(array[i], 4);
    }

    display1(array, 8); // as 1-D array

    for (i=0; i<2; i++) // as 2-D array
    {
        display2(array[i], 4);
    }

    display2(array, 8); // as 1-D array

    return 0;
}

void display1(int *ptr, int size)
{
    int j;

    printf("Display1 result: ");
    for (j=0; j<size; j++) 
        printf("%d ", *ptr++);
    putchar('\n');
}

void display2(int ar[], int size)
{
    int k;

    printf("Display2 result: ");
    for (k=0; k<size; k++)
        printf("%d ", ar[k] * 5);
    putchar('\n');
}