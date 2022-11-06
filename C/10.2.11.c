#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void get_freq(int numbers[], int freq[SIZE], int numInt);
void print_hist(int freq[SIZE]);

int main()
{
    int numbers[1000], freq[SIZE], numInt, i, j;
    printf("Enter the number of integers to be generated: \n");
    scanf("%d", &numInt);
    for (i=0; i<numInt; i++)
    {
        numbers[i] = rand() % 100;
    }
    for (i=0; i<SIZE; i++)
    {
        freq[i] = 0;
    }
    get_freq(numbers, freq, numInt);
    print_hist(freq);
    return 0;
}

void get_freq(int numbers[], int freq[SIZE], int numInt)
{
    int i, digit;
    for (i=0; i<numInt; i++)
    {
        digit = numbers[i] / 10; 
        freq[digit] += 1;
    }
}

void print_hist(int freq[SIZE])
{
    ;
    int i, j;
    for (i=0; i<SIZE; i++)
    {
        if (i == 0)
            printf("0 - 9     | ");
        else 
            printf("%d0 - %d9   | ", i, i);
        for (j=0; j<freq[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}