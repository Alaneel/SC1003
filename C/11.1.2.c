#include <stdio.h>
#include <string.h>

int main()
{
    char name[80], *p; // allocate memory
    printf("Hi, what is your name?\n");
    fgets(name, 80, stdin);
    if (strchr(name, '\n'))
        p = strchr(name, '\n');
        *p = '\0';
    printf("Nice name, %s\n", name);
    return 0;
}