#include <stdio.h>
#include <string.h>

void extractLastChar(char *str1, char *str2);

int main()
{
    char str1[80], str2[80], *p;

    printf("Enter a string: \n");
    fgets(str1, 80, stdin);
    if (strchr(str1, '\n'))
    {
        p = strchr(str1, '\n');
        *p = '\0';
    }
    extractLastChar(str1, str2);
    printf("extractLastChar(): %s\n", str2);
    
    return 0;
}

void extractLastChar(char *str1, char *str2)
{
    int i = 0, count = 0;

    while (str1[i] != '\0')
    {
        if (str1[i] == ' ') 
        {
            str2[count] = str1[i-1];
            count++; 
        }
        i++;
    }
    str2[count] = str1[i-1];
    str2[count+1] = '\0';
}