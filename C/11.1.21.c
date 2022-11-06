#include <stdio.h>
#include <string.h>

int stringcmp(char *s1, char *s2);

int main()
{
    char s1[100], s2[100];
    printf("Enter the source string: \n");
    fgets(s1, 100, stdin);
    printf("Enter the target string: \n");
    fgets(s2, 100, stdin);
    switch (stringcmp(s1, s2))
    {
        case 0:
            printf("stringcmp(): %s\n", "equal");
            break;
        case 1:
            printf("stringcmp(): %s\n", "greater than");
            break;
        case -1:
            printf("stringcmp(): %s\n", "less than");
            break;
    }
}

int stringcmp(char *s1, char *s2)
{
    int i;
    while ((s1[i] != '\0') || (s2[i] != '\0'))
    {
        if (s1[i] > s2[i])
            return 1;
        else if (s1[i] < s2[i])
            return -1;
        i++;
    }
    return 0;
}