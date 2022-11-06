#include <stdio.h>

int main()
{
    int year;
    char Horoscope[12][10] = {"Rat", "Cow", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"};

    printf("Enter your birth year: \n");
    scanf("%d", &year);
    while (year != -1)
    {
        printf("chineseHoroscope: %s\n", Horoscope[((year % 12) + 8) % 12]);
        printf("Enter your birth year: \n");
        scanf("%d", &year);
    }

    return 0;
}