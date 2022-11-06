#include <stdio.h>
#include <string.h>

void minCharToEnd(char *str);

int main()
{
    char str[80];

    printf("Enter a string: \n");
    scanf("%s", str);
    minCharToEnd(str);
    printf("minCharToEnd(): %s\n", str);

    return 0;
}

void minCharToEnd(char *str)
{
    int i = 0, j = 0, minIndex = 0;
    char minChar = ' ', temp = ' ';

    minChar = str[0];
    while (str[i] != '\0')
    {
        if (str[i] - minChar < 0)
        {
            minIndex = i;
            minChar = str[i];
        }
        i++;
    }

    temp = str[minIndex];
    for (j=minIndex; j<i-1; j++)
    {
        str[j] = str[j+1];
    }
    str[i-1] = temp;
}