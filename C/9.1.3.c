#include <stdio.h>

char findGrade(float marks);

int main()
{
    char answer;
    answer = findGrade(68.5);
    printf("Grade is %c\n", answer);
    return 0;
}

char findGrade(float marks)
{
    char grade;
    if (marks >= 50)
        grade = 'P';
    else
        grade = 'F';
    return grade;
}