#include <stdio.h>
#include <string.h>
#define SIZE 10

void findMinMaxStr(char word[][40], char *first, char *last, int size);

int main()
{
    char word[SIZE][40];
    char first[40], last[40];
    int i, size;

    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d words: \n", size);
    for (i=0; i<size; i++) scanf("%s", word[i]);
    findMinMaxStr(word, first, last, size);
    printf("First word = %s, Last word = %s\n", first, last);

    return 0;
}

void findMinMaxStr(char word[][40], char *first, char *last, int size)
{
    int i = 0, j = 0;

    strcpy(first, word[0]);
    strcpy(last, word[0]);
    for (i=1; i<size; i++)
    {
        while (first[j] - word[i][j] == 0) j++;
        if (word[i][j] - first[j] < 0) strcpy(first, word[i]);
        j = 0;
        while (last[j] - word[i][j] == 0) j++;
        if (word[i][j] - last[j] > 0) strcpy(last, word[i]);
        j = 0;
    }
}