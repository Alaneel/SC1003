#include <stdio.h>
#define MAX_CHAR 80

int main()
{
    char str1[MAX_CHAR] = "string 1369 531";
    char str2[MAX_CHAR], str3[MAX_CHAR];
    int i, j;

    sscanf(str1, "%s %d %d", str2, &i, &j);
    sprintf(str3, "%d %d %s", j, i, str2);
    printf("%s\n", str3);
    return 0;
}