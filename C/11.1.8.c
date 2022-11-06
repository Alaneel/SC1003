#include <stdio.h>
#include <string.h>

int main()
{
    char target[40] = "Target string";
    char *source = "Source string";
    puts(target); puts(source);
    strcpy(target, source);
    puts(target); puts(source);
    return 0;
}