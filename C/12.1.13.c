#include <stdio.h>
#include <string.h>
#define SIZE 50

typedef struct {
    int id;
    char name[50];
} Student;

void inputStud(Student *s, int size);
void printStud(Student *s, int size);
int removeStud(Student *s, int *size, char *target);

int main()
{
    Student s[SIZE];
    int size = 0, choice;
    char target[80], *p;
    int result;
    printf("Select one of the following options: \n");
    printf("1: inputStud()\n");
    printf("2: removeStud()\n");
    printf("3: printStud()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter size: \n");
                scanf("%d", &size);
                inputStud(s, size);
                break;
            case 2:
                printf("Enter name to be removed: \n");
                scanf("\n");
                fgets(target, 80, stdin);
                if (strchr(target, '\n'))
                {
                    p = strchr(target, '\n');
                    *p = '\0';
                }
                printf("removeStud(): ");
                result = removeStud(s, &size, target);
                if (result == 0) printf("Successfully removed\n");
                else if (result == 1) printf("Array is empty\n");
                else if (result == 2) printf("The target does not exist\n");
                else printf("An error has occurred");
                break;
            case 3:
                printStud(s, size);
                break;
        }
    } while (choice < 4);
    return 0;
}

void inputStud(Student *s, int size)
{
    int i;
    char dummy, *p;

    printf("Enter %d students: \n", size);
    scanf("%c", &dummy);
    for (i=0; i<size; i++)
    {
        printf("Student ID: \n");
        scanf("%d", &(s+i)->id);
        scanf("%c", &dummy);
        printf("Student Name: \n");
        fgets((s+i)->name, 80, stdin);
        if (strchr((s+i)->name, '\n'))
        {
            p = strchr((s+i)->name, '\n');
            *p = '\0';
        }
    }
    printf("\n");
}

void printStud(Student *s, int size)
{
    int i;

    printf("The current student list: \n");
    if (size == 0) printf("Empty array\n");
    else
    {
        for (i=0; i<size; i++)
        {
            if (strcmp((s+i)->name, "\0") == 0)
                continue;
            printf("Student ID: %d\n", (s+i)->id);
            printf("Student Name: %s\n", (s+i)->name);
        }
    }
    printf("\n");
}

int removeStud(Student *s, int *size, char *target)
{
    int i;

    printf("\n");
    if (*size == 0) return 1;
    else
    {
        for (i=0; i<*size; i++)
        {
            if (strcmp((s+i)->name, target) == 0)
            {
                strcpy((s+i)->name, "\0");
                return 0;
            }
                
        }
        return 2;
    }
}