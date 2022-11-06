#include <stdio.h>

struct personTag {
    char name[40];
    char id[20];
    char tel[20];
};
struct courseTag {
    int year, semester;
    char grade;
};
struct studentTag {
    struct personTag studentInfo;
    struct courseTag SC101, SC102;
};
struct studentTag student[3] = {
    {{"John", "CE000011", "123-4567"}, {2002, 1, 'B'}, {2002, 1, 'A'}},
    {{"Mary", "CE000022", "234-5678"}, {2002, 1, 'C'}, {2002, 1, 'A'}},
    {{"Peter", "CE000033", "345-6789"}, {2002, 1, 'B'}, {2002, 1, 'A'}}
};

int main(){
    int i;
    for (i=0; i<=2; i++)
    {
        printf("Name: %s, ID: %s, Tel; %s\n", student[i].studentInfo.name, student[i].studentInfo.id, student[i].studentInfo.tel);
        printf("SC101 in year %d semester %d: %c\n", student[i].SC101.year, student[i].SC101.semester, student[i].SC101.grade);
        printf("SC102 in year %d semester %d: %c\n", student[i].SC102.year, student[i].SC102.semester, student[i].SC102.grade);
    }
    return 0;
}