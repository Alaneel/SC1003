#include <stdio.h>

int main()
{
    int sum = 0, item;
    printf("Enter the list of intergers: \n");
    scanf("%d", &item);
    while (item != -1){
        sum += item;
        scanf("%d", &item);
    }
    printf("The sum is %d\n", sum);
    return 0;
}