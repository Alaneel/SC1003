// maxNum

#include <stdio.h>

void avg(int array[], int size, double *avg);
void max_n(int array[], int size, int *max);
void max_2(double score1, double score2, double *max);

int main()
{
    int score1[8] = {10, 11, 15, 20, 55, 76, 90, 84};
    int score2[9] = {4, 9, 12, 98, 35, 42, 4, 5, 10};
    int len1 = 8, len2 = 9, max1, max2;
    double avg1 = 0, avg2 = 0, max;
    avg(score1, len1, &avg1);
    avg(score2, len2, &avg2);
    max_2(avg1, avg2, &max);
    printf("Highest Avg: %.3f\n", max);
    max_n(score1, len1, &max1);
    max_n(score2, len2, &max2);
    max_2(max1, max2, &max);
    printf("Highest Score: %.0f\n", max);
    return 0;
}

void avg(int array[], int size, double *avg)
{
    int i;
    double sum = 0;
    for (i=0; i<size; i++)
    {
        sum += array[i];
    }
    *avg = sum / size;

}

void max_n(int array[], int size, int *max)
{
    int i;
    *max = array[0];
    for (i=1; i<size; i++)
    {
        if (array[i] > *max)
            *max = array[i];
    }
}

void max_2(double score1, double score2, double *max)
{
    if (score1 >= score2)
        *max = score1;
    else
        *max = score2;
}