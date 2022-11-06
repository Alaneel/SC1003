#include <stdio.h>
#include <string.h>

void maxCharToFront(char *str);

int main()
{
    char str[100];

    printf("Enter a string: \n");
    scanf("%s", str);
    maxCharToFront(str);
    printf("maxCharToFront(): %s\n", str);
    return 0;
}

void maxCharToFront(char *str)
{
    int i, pos = 0;
    char max = str[0];
    while (str[i] != '\0')
    {
        if (str[i] > max)
        {
            pos = i;
            max = str[pos];
        }
        i++;
    }
    while (pos > 0)
    {
        str[pos] = str[pos - 1];
        pos--;
    }
    str[0] = max;
}