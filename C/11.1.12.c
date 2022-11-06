#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ar[80];
    int i, num;

    scanf("%s", ar);
    i = 0;
    while (isdigit(ar[i]))
        i++;
    if (ar[i] != '\0')
        printf("The input is not a number\n");
    else {
        num = atoi(ar);
        printf("Input is %d\n", num);
    }
    return 0;
}