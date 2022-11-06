#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1000

int palindrome(char *str);

int main()
{
    char str[80], *p;
    int result = INIT_VALUE;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (strchr(str, '\n'))
    {
        p = strchr(str, '\n');
        *p = '\0';
    }
    result = palindrome(str);
    if (result == 1)
        printf("palindrome(): A palindrome\n");
    else if (result == 0)
        printf("palindrome(): Not a palindrome\n");
    else printf("An error\n");
    return 0;
}

int palindrome(char *str)
{
    int i, len = 0, match = 1;
    for (i=0; str[i] != '\0'; i++)
    {
        len++;
    }
    for(i=0; i<=(len+1)/2; i++)
    {
        if (str[i] != str[len-i-1])
            match = 0;
    }
    if (match == 1)
        return 1;
    else return 0;
}