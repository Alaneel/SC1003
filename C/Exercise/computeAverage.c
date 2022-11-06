#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    double testScore;
    double examScore;
    double total;
};

double average();

int main()
{
    printf("average(): %.2f\n", average());

    return 0;
}

double average()
{
    struct student s;
    char *p = NULL;
    double total = 0;
    int count = 0;

    while (1 == 1)
    {
        printf("Enter student name: \n");
        fgets(s.name, 20, stdin);
        if (strchr(s.name, '\n'))
        {
            p = strchr(s.name, '\n');
            *p = '\0';
        }
        if (strcmp(s.name, "END") == 0) break;
        printf("Enter test score: \n");
        scanf("%lf", &s.testScore);
        printf("Enter exam score: \n");
        scanf("%lf", &s.examScore);
        s.total = (s.examScore + s.testScore) / 2;
        printf("Student %s total = %.2f\n", s.name, s.total);
        total += s.total;
        count++;
        scanf("\n");
    }

    if (count == 0) count = 1;
    
    return (total / count);
}