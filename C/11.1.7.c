#include <stdio.h>
#include <string.h>

int main()
{
    char str1[40] = "Problem";
    char *str2 = "Solving";
    printf("The first string: %s\n", str1);
    printf("The second string: %s\n", str2);
    strcat(str1, str2);
    printf("The combined string: %s\n", str1);
    return 0;
}