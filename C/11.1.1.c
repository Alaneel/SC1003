#include <stdio.h>

int main()
{
    char array[] = "pointer";
    char *ptr1 = "10 spaces";

    printf("ptr1 = %s\n", ptr1);
    printf("array = %s\n", array);
    array[5] = 'A';
    printf("array = %s\n", array);
    ptr1="OK";
    printf("ptr1 = %s\n", ptr1);
    ptr1 = array;
    printf("ptr1 = %s\n", ptr1);
    ptr1[5] = 'C';
    printf("ptr1 = %s\n", ptr1);
    ptr1 = "A new string";
    printf("ptr1 = %s\n", ptr1);
    return 0;
}