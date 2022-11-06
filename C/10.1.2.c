#include <stdio.h>
#define SIZE 5

int main()
{
    char myChar[SIZE] = {'b', 'a', 'c', 'k', 's'};
    int i;
    char searchChar;

    printf("Enter a char to search: \n");
    scanf("%c", &searchChar);

    for (i=0; i<SIZE; i++)
    {
        if (myChar[i] == searchChar) {
            printf("Found %c at index %d\n", myChar[i], i);
            break;
        }
    }
    return 0;
}