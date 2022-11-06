#include <stdio.h>
#include <string.h>

int main()
{
    char str1[81], str2[81], *p;
    int result;
    printf("String Comparison: \n");
    printf("Enter the first string: ");
    fgets(str1, 81, stdin);
    if (strchr(str1, '\n')) 
    {
        p = strchr(str1, '\n');
        *p = '\0';
    }
    printf("Enter the second string: ");
    fgets(str2, 81, stdin);
    if (strchr(str1, '\n'))
    {
        p = strchr(str2, '\n');
        *p = '\0';
    }
    result = strcmp(str1, str2);
    printf("The result of the comparison is %d\n", result);
    return 0;
}

