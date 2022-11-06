#include <stdio.h>

int main()
{
    int choice;
    printf("Enter a one or a zero => ");
    scanf("%d", &choice);
    choice ? printf("A one\n") : printf("A zero\n");
    return 0;
}