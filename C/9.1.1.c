#include <stdio.h>

int factorial(int n);

int main(){
    int five;
    five = factorial(5);
    printf("%d\n", five);
    return 0;
}

int factorial(int n)
{
    int temp = 1;

    if (n < 0){
        printf("error: must be +ve\n");
        return 0;
    }
    else if (n == 0)
        return 1;
    else
        for (; n>0; n--)
            temp *= n;

    return temp;
}