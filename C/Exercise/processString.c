#include <stdio.h>
#include <string.h>
#include <ctype.h>

void processString(char *str, int *totVowels, int *totDigits);

int main()
{
    char str[50], *p;
    int totVowels, totDigits;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (strchr(str, '\n'))
    {
        p = strchr(str, '\n');
        *p = '\0';
    }
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);

    return 0;
}

void processString(char *str, int *totVowels, int *totDigits)
{
    int i = 0;

    *totVowels = 0;
    *totDigits = 0;
    while (str[i] != '\0')
    {
        if ((str[i] - 'a' == 0) || (str[i] - 'e' == 0) || (str[i] - 'i' == 0) || (str[i] - 'o' == 0) || (str[i] - 'u' == 0) || (str[i] - 'A' == 0) || (str[i] - 'E' == 0) || (str[i] - 'I' == 0) || (str[i] - 'O' == 0) || (str[i] - 'U' == 0)) (*totVowels)++;
        else if (isdigit(str[i])) (*totDigits)++;
        i++;
    }
}