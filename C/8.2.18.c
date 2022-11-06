#include <stdio.h>

int main(){
    int studentNumber = 0, mark;
    char grade;
    printf("Enter StudentID: ");
    scanf("%d", &studentNumber);
    while (studentNumber != -1){
        printf("Enter mark: ");
        scanf("%d", &mark);
        switch (mark / 10){ // Use integer division
            case 10: case 9: case 8:
                grade = 'A';
                break;
            case 7:
                grade = 'B';
                break;
            case 6:
                grade = 'C';
                break;
            case 5:
                grade = 'D';
                break;
            case 4:
                grade = 'E';
                break;
            default: grade = 'F';       
        }
        printf("Grade = %c\n", grade);
        printf("Enter StudentID: ");
        scanf("%d", &studentNumber);
    }
    return 0;
}