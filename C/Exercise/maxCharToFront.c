#include <stdio.h>
#include <string.h>

void maxCharToFront(char *str);

int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (strchr(str, '\n'))
    {
        p = strchr(str, '\n');
        *p = '\0';
    }
    printf("maxCharToFront): ");
    maxCharToFront(str);
    puts(str);

    return 0;
}

void maxCharToFront(char *str)
{
    int i = 0, j = 0, maxIndex = 0;
    char temp;

    maxIndex = 0;
    while (str[i] != '\0')
    {
        if (str[i] - str[maxIndex] > 0) maxIndex = i;
        i++;
    }

    temp = str[maxIndex];
    for (j=maxIndex; j>=1; j--) str[j] = str[j-1];
    str[0] = temp;
}