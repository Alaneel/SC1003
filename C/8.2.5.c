#include <stdio.h>

int main()
{
    char choice; int num1, num2, result;
    printf("Enter you choice (A, S or M) => ");
    scanf("%c", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    switch(choice){
        case 'a':
        case 'A': result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case 's':
        case 'S': result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case 'm':
        case 'M': result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        default: printf("Not one of the proper choices!\n");
    }
    return 0;
}