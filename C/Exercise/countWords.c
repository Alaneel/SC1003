#include <stdio.h>
#include <string.h>

int countWords(char *s);

int main()
{
    char str[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (strchr(str, '\n'))
    {
        p = strchr(str, '\n');
        *p = '\0';
    }
    printf("countWords(): %d\n", countWords(str));

    return 0;
}

int countWords(char *s)
{
    int i = 0, count = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ') count++;
        i++;
    }

    count++;

    return count;
}