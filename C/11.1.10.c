// Read a few lines from standard input & write each line to standard output with the characters reversed.
// The input terminates with the line "END"

#include <stdio.h>
#include <string.h>

void reverse(char *s);

int main()
{
    char line[132], *p;
    fgets(line, 132, stdin);
    if (strchr(line, '\n'))
    {
        p = strchr(line, '\n');
        *p = '\0';
    }
    while (strcmp(line, "END") != 0)
    {
        reverse(line);
        printf("%s\n", line);
        fgets(line, 132, stdin);
        if (strchr(line, '\n'))
        {
            p = strchr(line, '\n');
            *p = '\0';
        }
    }
    return 0;
}

void reverse(char *s) // typical
{
    char c, *end;
    end = s + strlen(s) - 1;
    while (s < end)
    {
        c = *s;
        *s++ = *end; // *s = *end; s++;
        *end-- = c; // *end = c; end--;
    }
}