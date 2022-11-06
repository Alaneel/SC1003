#include <stdio.h>
#include <string.h>
#include <ctype.h>

int longWordLength(char *s);

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
    printf("longWordLength(): %d\n", longWordLength(str));

    return 0;
}

int longWordLength(char *s)
{
    int i = 0, count = 0, maxcount = 0;

    while (s[i] != '\0')
    {
        if ((s[i] == ' ') || (ispunct(s[i])))
        {
            if (count > maxcount) maxcount = count;
            count = 0;
        }
        else count++;
        i++;
    }

    if (count > maxcount) maxcount = count;

    return maxcount;
}