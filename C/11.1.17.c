// longWordLength

#include <stdio.h>
#include <string.h>

int longWordLength(char *s);

int main()
{
    char string[100], *p;
    printf("Enter a string: \n");
    fgets(string, 100, stdin);
    if (strchr(string, '\n'))
    {
        p = strchr(string, '\n');
        *p = '\0';
    }
    printf("longWordLength(): %d\n", longWordLength(string));
    return 0;
}

int longWordLength(char *s)
{
    int max = 0, count;
    while (*s != '\0')
    {
        count = 0;
        while (((*s >= 'A') && (*s <= 'Z')) || ((*s >= 'a') && (*s <= 'z'))) // important matching
        {
            count++;
            s++;
        }
        if (max < count) max = count;
        s++;
    }
    return max;
    
}