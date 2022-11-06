#include <stdio.h>
#include <string.h>

char *strNRChr(char *str, int n, char ch);

int main()
{
    char str[80], ch, dummy;
    char *temp = NULL;
    int n;

    printf("Enter a string: \n");
    scanf("%s", str);
    scanf("%c", &dummy);
    printf("Enter a char: \n");
    scanf("%c", &ch);
    printf("Enter the occurrence: \n");
    scanf("%d", &n);
    temp = strNRChr(str, n, ch);
    if (temp != NULL) printf("strNRChr(): %s\n", temp);
    else printf("strNRChr(): null string\n");

    return 0;
}

char *strNRChr(char *str, int n, char ch)
{
    int i = 0, j = 0, count = 0;
    char *c = NULL;

    while (str[i] != '\0') 
    {
        if (str[i] - ch == 0) count++;
        i++;
    }
    
    while (str[j] != '\0')
    {
        if (str[j] - ch == 0)
        {
            c = str+j;
            count--;
        }
        if (count + 1 == n) return c;
        j++;
    }
    
    return NULL;
}