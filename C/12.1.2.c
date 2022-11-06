#include <stdio.h>

struct personTag {
    char name[40], id[20], tel[20];
};

struct personTag student[10] = {
    {"John", "CE000011", "123-4567"},
    {"John", "CE000011", "123-4567"},
    {"John", "CE000011", "123-4567"},
    {"John", "CE000011", "123-4567"},
    {"John", "CE000011", "123-4567"},
    {"Mary", "CE000022", "234-5678"},
    {"Mary", "CE000022", "234-5678"},
    {"Mary", "CE000022", "234-5678"},
    {"Mary", "CE000022", "234-5678"},
    {"Mary", "CE000022", "234-5678"}
};

int main()
{
    int i;
    for (i=0; i<10; i++)
        printf("Name = %s, ID: %s, Tel; %s\n", student[i].name, student[i].id, student[i].tel);
    return 0;
}