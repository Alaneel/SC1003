#include <stdio.h>

struct personTag {
    char name[40], id[20], tel[20];
};
struct personTag student = {"John", "CE000011", "1234"};
struct personTag *ptr;

int main()
{
    printf("%s %s %s\n", student.name, student.id, student.tel);
    ptr = &student;
    printf("%s %s %s\n", (*ptr).name, (*ptr).id, (*ptr).tel);
    printf("%s %s %s\n", ptr->name, ptr->id, ptr->tel);
    return 0;
}