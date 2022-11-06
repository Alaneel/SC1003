// sweepSpace

#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main(){
    char str[80], str2[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (strchr(str, '\n'))
    {
        p = strchr(str, '\n');
        *p = '\0';
    }
    strcpy(str2, str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}

char *sweepSpace1(char *str)
{
    int i = 0, j = 0;
    char tmp[80];

    for (i=0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            tmp[j] = str[i];
            j++;
        }
    }

    tmp[j] = '\0';

    strcpy(str, tmp);

    return str;
}

char *sweepSpace2(char *str)
{
    int i = 0, j = 0;
    char tmp[80];
    
    for (i=0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            tmp[j] = str[i];
            j++;
        }
    }

    tmp[j] = '\0';

    strcpy(str, tmp);

    return str;
}