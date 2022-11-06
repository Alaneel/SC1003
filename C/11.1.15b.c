// countStrings

#include <stdio.h>
#include <string.h>

void check_string(char words[100], int *count);

int main()
{
    char words[100], *p;
    int count;
    printf("Enter a string (enter #### to stop): ");
    fgets(words, 100, stdin);
    while (strncmp(words, "####", 4) != 0)
    {
        while (strchr(words, '\n'))
        {
            p = strchr(words, '\n');
            *p = '\0';
        }
        check_string(words, &count);
        printf("Enter a string (enter #### to stop): ");
        fgets(words, 100, stdin);
    }
    printf("%d strings with letter 'a'\n", count);
    return 0;
}

void check_string(char words[100], int *count)
{
    if (strchr(words, 'a'))
        *count += 1;
}