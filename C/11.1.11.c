#include <stdio.h>
#include <string.h>
#include <ctype.h>

void modify(char *str);

int main()
{
    char str[80], *p;
    printf("Enter a string of text: \n");
    fgets(str, 80, stdin);
    if (strchr(str, '\n'))
    {
        p = strchr(str, '\n');
        *p = '\0';
    }
    modify(str); puts(str);
    return 0;
}

void modify(char *str)
{
    while (*str != '\0')
    {
        if (isupper(*str))
            *str = tolower(*str);
        if (islower(*str))
            *str = toupper(*str);
        str++;
    }
}