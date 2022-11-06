#include <stdio.h>

void add2(int *ptr);

int main()
{
    int num = 5;
    add2(&num);
    printf("Value of num is : %d\n", num);
    return 0;
}

void add2(int *ptr)
{
    ++(*ptr);
}