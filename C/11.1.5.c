#include <stdio.h>

int length1(char string[]);
int length2(char *string);

int main()
{
    char *greeting = "hello", word[] = "abc";
    printf("The length is %d\n", length1(greeting));
    printf("The length is %d\n", length2(word));
    return 0;
}

int length1(char string[])
{
    int count = 0;
    while (string[count] != '\0')
        count++;
    return count;
}

int length2(char *string)
{
    int count = 0;
    while (*(string + count) != '\0')
        count++;
    return count;
}