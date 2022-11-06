#include <stdio.h>
#include <string.h>
#define SIZE 2

struct Name {
    char firstname[20];
    char lastname[20];
};

typedef struct {
    struct Name name;
    int age;
    char gender;
    float salary;
} Employee;

void readEmployee(Employee *emp);
void printEmployee(Employee *emp);

int main()
{
    Employee e[SIZE];
    int i;
    printf("Enter %d records: \n", SIZE);
    for (i=0; i<SIZE; i++)
    {
        readEmployee(e+i);
    }
    printEmployee(e);
    return 0;
}

void readEmployee(Employee *emp)
{
    int i;
    char *p, dummy;

    printf("Enter names (first_name last_name): ");
    scanf("%s %s",(emp+i)->name.firstname, (emp+i)->name.lastname);
    if (strchr((emp+i)->name.firstname, '\n'))
    {
        p = strchr((emp+i)->name.firstname, '\n');
        *p = '\0';
    }
    if (strchr((emp+i)->name.lastname, '\n'))
    {
        p = strchr((emp+i)->name.lastname, '\n');
        *p = '\0';
    }
    printf("Enter age: ");
    scanf("%d", &(emp+i)->age);
    scanf("%c", &dummy);
    printf("Enter gender: ");
    scanf("%c", &(emp+i)->gender);
    printf("Enter salary: ");
    scanf("%f", &(emp+i)->salary);
    scanf("%c", &dummy);
}

void printEmployee(Employee *emp)
{
    int i;

    printf("Print employee data: \n");
    for (i=0; i<SIZE; i++)
    {
        printf("%s %s %d %c %f\n", (emp+i)->name.firstname, (emp+i)->name.lastname, (emp+i)->age, (emp+i)->gender, (emp+i)->salary);
    }
}