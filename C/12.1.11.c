#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;

} Person;

Person findMiddleAge(Person *p);
void readData(Person *p);

int main()
{
    Person man[3], middle;
    
    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}

Person findMiddleAge(Person *p)
{
    int min, max, i;
    max = min = p->age;
    for (i=1; i<3; i++)
    {
        if ((p+i)->age > max)
            max = (p+i)->age;
        else if ((p+i)->age < min)
            min = (p+i)->age;
    }
    for (i=0; i<3; i++)
    {
        if (((p+i)->age != max) && ((p+i)->age != min))
            break;
    }
    return *(p+i);
}

void readData(Person *p)
{
    int i;
    char dummy;
    for (i=0; i<3; i++)
    {
        printf("Enter person %d: \n", i+1);
        scanf("%s", (p+i)->name);
        scanf("%d", &(p+i)->age);
    }
}