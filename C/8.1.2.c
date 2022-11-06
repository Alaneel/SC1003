#include <stdio.h>

int main(){
    char ch, ch1, ch2, ch3, ch4;
    putchar('1');
    putchar(ch='a');
    putchar('\n');
    printf("%c%c\n", 49, ch); // output "1a"
    ch1 = getchar(); // input ab then ch1 = 'a' and ch2 = 'b'
    ch2 = getchar();
    putchar(ch1);
    putchar(ch2);
    putchar('\n');
    ch3 = getchar();
    ch4 = getchar();
    putchar(ch3);
    putchar(ch4);
    putchar('\n');
    return 0;
}