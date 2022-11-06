#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} Person;

void readData(Person *p);
Person findMiddleAge(Person *p);

int main()
{
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);

    return 0;
}

void readData(Person *p)
{
    int i = 0;

    for (i=0; i<3; i++)
    {
        printf("Enter person %d: \n", i+1);
        scanf("%s %d", (p+i)->name, &(p+i)->age);
    }
}

Person findMiddleAge(Person *p)
{
    int minIndex = 0, maxIndex = 0, i = 0, j = 0;

    for (i=0; i<3; i++)
    {
        if ((p+i)->age > (p+maxIndex)->age) maxIndex = i;
        if ((p+i)->age < (p+minIndex)->age) minIndex = i;
    }

    while ((j==maxIndex) || (j==minIndex)) j++;
    return (*(p+j));
}