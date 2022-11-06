#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cipher(char *s);
void decipher(char *s);

int main()
{
    char s[100], *p;
    printf("Enter a cipher string: \n");
    fgets(s, 100, stdin);
    while (strchr(s, '\n'))
    {
        p = strchr(s, '\n');
        *p = '\0';
    }
    cipher(s);
    printf("cipher(): %s\n", s);
    decipher(s);
    printf("decipher(): %s\n", s);
    return 0;
}

void cipher(char *s)
{
    int i;
    for (i=0; (s[i] != '\0'); i++)
    {
        if(isalpha(s[i]))
        {
            if (s[i] == 'z')
                s[i] = 'a';
            else if (s[i] == 'Z')
                s[i] = 'A';
            else s[i] = s[i] + 1;
        }
    }
}

void decipher(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if(isalpha(s[i]))
        {
            if (s[i] == 'a')
                s[i] = 'z';
            else if (s[i] == 'A')
                s[i] = 'Z';
            else s[i] = s[i] - 1;
        }
        i++;
    }
}