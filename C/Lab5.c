#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char name[20];
    int telno;
} PhoneBk;

void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);

int main()
{
    PhoneBk s[MAX];
    char t[20], *p;
    int size = 0, choice = 5;

    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("\n");
                size = readin(s);
                break;
            case 2:
                scanf("\n");
                printf("Enter search name: \n");
                fgets(t, 20, stdin);
                if (strchr(t, '\n'))
                {
                    p = strchr(t, '\n');
                    *p = '\0';
                }
                search(s, size, t);
                break;
            case 3:
                printPB(s, size);
                break;
        }
    } while (choice < 4);
    return 0;
}

void printPB(PhoneBk *pb, int size)
{
    int i;

    printf("The phone book list: \n");
    if (size == 0)
        printf("Empty phonebook\n");
    else
    {
        for (i=0; i<size; i++)
        {
            printf("Name: %s\n", (pb+i)->name);
            printf("Telno: %d\n", (pb+i)->telno);
        }
    }
}

int readin(PhoneBk *pb)
{
    char *p;
    int count = 0;
    printf("Enter name: \n");
    fgets(pb->name, 20, stdin);
    if (strchr(pb->name, '\n'))
    {
        p = strchr(pb->name, '\n');
        *p = '\0';
    }
    while (*(pb->name) != '#')
    {
        printf("Enter tel: \n");
        scanf("%d", &(pb->telno));
        scanf("\n");
        printf("Enter name: \n");
        pb++;
        count++;
        fgets(pb->name, 20, stdin);
        if (strchr(pb->name, '\n'))
        {
            p = strchr(pb->name, '\n');
            *p = '\0';
        }
    }
    return count;
}

void search(PhoneBk *pb, int size, char *target)
{
    int i, status = 0;
    for (i=0; i<size; i++)
    {
        if (strcmp((pb+i)->name, target) == 0)
        {
            printf("Name = %s, Tel = %d\n", (pb+i)->name, (pb+i)->telno);
            status = 1;
        }
    }
    if (status == 0) printf("Name not found!\n");
}