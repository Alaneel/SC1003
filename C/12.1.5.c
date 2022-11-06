#include <stdio.h>

struct book {
    char title[40];
    char author[20];
    float value;
    int libcode;
};

int main()
{
    struct book bookRec = {"C Programming", "SC Hui", 30.00, 123456};
    struct book *ptr;
    ptr = &bookRec;
    printf("The book is %s (%d) by %s: $%.2f\n", ptr->title, ptr->libcode, ptr->author, ptr->value);
    return 0;
}