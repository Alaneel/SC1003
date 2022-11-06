// countStrings

#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, i = 0;
    char str_sentinal[20];
    printf("enter a string (enter #### to stop): ");
    scanf("%s", str_sentinal);
    while (strcmp(str_sentinal, "####") != 0)
    {
        while (str_sentinal[i] != '\0')
        {
            if (str_sentinal[i] == 'a')
            {
                count += 1;
                break;
            }
            i++;
        }
        printf("enter a string (enter #### to stop): ");
        scanf("%s", str_sentinal);
    }
    printf("%d strings with letter 'a'\n", count);
    return 0;
}