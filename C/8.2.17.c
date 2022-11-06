#include <stdio.h>

int main(){
    int studentNumber = 0, mark;
    char grade;
    printf("Enter StudentID: ");
    scanf("%d", &studentNumber);
    while (studentNumber != -1){
        printf("Enter mark: ");
        scanf("%d", &mark);
        if (mark >= 90) grade = 'A';
        else if (mark >= 80) grade = 'B';
        else if (mark >= 70) grade = 'C';
        else if (mark >= 60) grade = 'D';
        else if (mark >= 50) grade = 'E';
        else grade = 'F';
        printf("Grade = %c\n", grade);
        printf("Enter StudentID: ");
        scanf("%d", &studentNumber);
    }
    return 0;
}