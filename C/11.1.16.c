// password

#include <stdio.h>
#include <ctype.h>

int main()
{
    int lowCase = 0, upCase = 0, digit = 0, punc = 0, i = 0;
    char password[100];
    printf("Input your password: ");
    scanf("%s", password);
    while (password[i] != '\0')
    {
        if (islower(password[i])) lowCase = 1;
        else if (isupper(password[i])) upCase = 1;
        else if (isdigit(password[i])) digit = 1;
        else if (ispunct(password[i])) punc = 1;
        i++;
    }
    if (lowCase && upCase && digit && punc) printf("Your password is strong enough\n");
    else printf("Your password is weak\n");
    return 0;
}