#include <stdio.h>

int main(){
    int n = 2;
    n+=n-=n*n;
    printf("%d\n", n);
    return 0;
}