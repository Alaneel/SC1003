#include <stdio.h>
#define TRUE 1
#define FALSE 0

int romanNum(char *str);

int main()
{
    int num;
    char roman[10];

    printf("Enter a Roman number: \n");
    scanf("%s", roman);
    num = romanNum(roman);
    printf("romanNum(): %d\n", num);

    return 0;
}

int romanNum(char *str)
{
    int i = 0, num = 0;

    while (str[i] != '\0')
    {
        if (str[i] - 'I' == 0)
        {
            if (str[i+1] - 'I' == 0)
            {
                if (str[i+2] - 'I' == 0)
                {
                    num += 3;
                    i += 3;
                }
                else
                {
                    num += 2;
                    i += 2;
                }
            }
            else if (str[i+1] - 'V' == 0)
            {
                num += 4;
                i += 2;
            }
            else if (str[i+1] - 'X' == 0)
            {
                num += 9;
                i += 2;
            }
            else
            {
                num += 1;
                i += 1;
            }
        }
        else if (str[i] - 'V' == 0)
        {
            if (str[i+1] - 'I' == 0)
            {
                if (str[i+2] - 'I' == 0)
                {
                    if (str[i+3] - 'I' == 0)
                    {
                        num += 8;
                        i += 4;
                    }
                    else
                    {
                        num += 7;
                        i += 3;
                    }
                }
                else
                {
                    num += 6;
                    i += 2;
                }
            }
            else
            {
                num += 5;
                i += 1;
            }
        }
        else
        {
            num += 10;
            i += 1;
        }
    }

    return num;
}