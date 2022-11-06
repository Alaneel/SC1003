#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char in[100];
    int i = 0, digitCount = 0, letterCount = 0;

    printf("Enter your characters (# to end):\n");
    fgets(in, 100, stdin);
    while (in[i] != '#')
    {
        if (isdigit(in[i])) digitCount += 1;
        else if (islower(in[i]) || isupper(in[i])) letterCount += 1; 
        i++;
    }
    printf("The number of digits: %d\n", digitCount);
    printf("The number of letters: %d\n", letterCount);

    return 0;
}