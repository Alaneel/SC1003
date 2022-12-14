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
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}

void maxCharToFront(char *str)
{
    char max, *q;
    int i = 0;
    max = str[0];
    q = str;
    while (str[i] != '\0')
    {
        if (max < str[i])
        {
            max = str[i];
            q = str + i;
        }
        i++;
    }
    while (q > str)
    {
        *q = *(q-1);
        q--;
    }
    str[0] = max;
}