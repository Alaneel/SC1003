#include <stdio.h>
#include <string.h>

struct book {
    char title[40];
    char author[20];
    float value;
};

int main()
{
    char *p;
    struct book bkRecord;
    printf("Please enter the book title: \n");
    fgets(bkRecord.title, 40, stdin);
    if (strchr(bkRecord.title, '\n'))
    {
        p = strchr(bkRecord.title, '\n');
        *p = '\0';
    }
    printf("Please enter the author: \n");
    fgets(bkRecord.author, 20, stdin);
    if (strchr(bkRecord.author, '\n'))
    {
        p = strchr(bkRecord.author, '\n');
        *p = '\0';
    }
    printf("Please enter the value: \n");
    scanf("%f", &bkRecord.value);
    printf("%s by %s: $%.2f\n", bkRecord.title, bkRecord.author, bkRecord.value);
    return 0;
}