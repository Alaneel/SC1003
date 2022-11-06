#include <stdio.h>

int main()
{
    char choice; int num1, num2, result;
    printf("Enter you choice (A, S or M) => ");
    scanf("%c", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if ((choice == 'a') || (choice == 'A')){
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
    }
    else if ((choice == 's') || (choice == 'S')){
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
    }
    else if ((choice == 'm') || (choice == 'M')){
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
    } 
    else printf("Not one of the proper choices!\n");
    return 0;
}