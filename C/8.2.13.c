#include <stdio.h>
int main(){
    char i, j;
    int num = 0;
    for (i = 'a'; i <= 'c'; i++){
        for (j = 'a'; j <= 'c'; j++){
            num++;
            printf("%c%c ", i, j);
        }
        printf("\n");
    }
    printf("%d different strings of letters\n", num);
    return 0;
}