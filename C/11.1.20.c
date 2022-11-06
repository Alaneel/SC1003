#include <stdio.h>

char *stringcpy(char *s1, char *s2, int n);

int main()
{
    char s1[100], s2[100];
    int n;
    printf("Enter the string: \n");
    fgets(s2, 100, stdin);
    printf("Enter the number of characters: \n");
    scanf("%d", &n);
    printf("strncpy(): %s", stringcpy(s1, s2, n));
    return 0;
}

char *stringcpy(char *s1, char *s2, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (s2[i] != '\0')
            s1[i] = s2[i];
        else s1[i] = '\0';
    }
    return s1;
}