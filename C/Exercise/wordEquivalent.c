#include <stdio.h>
#include <string.h>

void wordEquivalent(int num, char *str);

int main()
{
    int num;
    char str[40] = "";

    printf("Enter the number: \n");
    scanf("%d", &num);
    wordEquivalent(num, str);
    printf("wordEquivalent(): %s\n", str);

    return 0;
}

void wordEquivalent(int num, char *str)
{
    char numEquivalent[10][10] = {"zero ", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};

    if (num > 99)
    {
        strcpy(str, "Input exceeds 99");
        return;
    }
    
    while (num)
    {
        strcat(str, numEquivalent[num % 10]);
        num /= 10;
    }
}