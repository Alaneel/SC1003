#include <stdio.h>
#include <string.h>

int main()
{
    char str[80], *p;
    printf("Enter a line of string: ");
    if (fgets(str, 80, stdin) == NULL)
    {
        printf("Error\n");
    }
    if (strchr(str, '\n'))
        p = strchr(str, '\n');
        *p = '\0';
    puts(str);
    return 0;
}