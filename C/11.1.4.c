#include <stdio.h>

int main()
{
    char name1[20], name2[20], name3[20];
    int count;
    printf("Please enter your strings.\n");
    count = scanf("%s %s %s", name1, name2, name3);
    printf("I read the %d strings: %s %s %s\n", count, name1, name2, name3);
    return 0;
}