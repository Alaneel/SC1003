#include <stdio.h>
#include <ctype.h>

int main()
{
    char in;

    printf("Enter a character: \n");
    scanf("%c", &in);
    if (isupper(in)) printf("Upper case letter\n");
    else if (islower(in)) printf("Lower case letter\n");
    else if (isdigit(in)) printf("Digit\n");
    else printf("Other character\n");

    return 0;
}