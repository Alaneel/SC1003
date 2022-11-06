#include <stdio.h>

char findGrade(float marks);

int main(){
    char c;
    c = findGrade(89.5);
    printf("%c\n", c);
    return 0;
}

char findGrade(float marks){
    char grade;

    if (marks >= 50)
        grade = 'P';
    else
        grade = 'F';
    return grade;
}