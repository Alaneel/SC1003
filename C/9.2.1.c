#include <stdio.h>

int main()
{
    int num = 3;
    int *ptr;

    ptr = &num;
    printf("num = %d, &num = %p\n", num, &num);
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);

    *ptr = 10;
    printf("num = %d, &num = %p\n", num, &num);

    return 0;
}