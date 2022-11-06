#include <stdio.h>

void function1(int a, int *b);
void function2(int c, int *d);
void function3(int h, int *k);

int main()
{
    int x, y;
    x = 5; y = 5;
    function1(x, &y);
    return 0;
}

void function1(int a, int *b)
{
    *b = *b + a;
    function2(a, b);
}

void function2(int c, int *d)
{
    *d = *d * c;
    function3(c, d);
}

void function3(int h, int *k)
{
    *k = *k - h;
}