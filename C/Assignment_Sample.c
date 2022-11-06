/*

The NTU Airlines fleet consists of one plane with a seating capacity of 5. It makes one flight daily
You are required to write a seating reservation program
The program uses an array of 5 structures
Each structure should hold:
    a seat number (ID) that has a value between 1 and 5
    a marker (status) that indicates whether the seat is assigned (EMPTY or TAKEN), and
    the customer name of the seat holder

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 5

typedef struct {
    int ID;
    char status[50];
    char customer[50];
} Seat;

void displayAll(Seat *seat);
void displayEmpty(Seat *seat, int size);
void displayAssigned(Seat *seat, int size);
int assignCustomer(Seat *seat, int size);
void deleteOne(Seat *seat);
void deleteAll(Seat *seat);

int main()
{
    Seat seat[SIZE];
    int size = 0, choice = SIZE, i = 0;
    char *p, dummychar;

    for (i=0; i<SIZE; i++)
    {
        (seat+i)->ID = i + 1;
        strcpy((seat+i)->status, "EMPTY");
        strcpy((seat+i)->customer, "Available");
    }

    printf("\n");
    printf("\t\t\tNTU-Airlines Menu\n"); 
    printf("\t\t\t-----------------\n");
    printf("\tSelect one of the following options: \n");
    printf("\t1: displayAll()\n");
    printf("\t2: displayEmpty()\n");
    printf("\t3: displayAssigned()\n");
    printf("\t4: assignCustomer()\n");
    printf("\t5: deleteOne()\n");
    printf("\t6: deleteAll()\n");
    printf("\t7: exit()\n\n\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%c", &dummychar);
                displayAll(seat);
                break;
            case 2:
                scanf("%c", &dummychar);
                displayEmpty(seat, size);
                break;
            case 3:
                scanf("%c", &dummychar);
                displayAssigned(seat, size);
                break;
            case 4:
                scanf("%c", &dummychar);
                size = assignCustomer(seat, size);
                break;
            case 5:
                scanf("%c", &dummychar);
                deleteOne(seat);
                break;
            case 6:
                scanf("%c", &dummychar);
                deleteAll(seat);
                break;
        }
    } while (choice < 7);
    return 0;
}

void displayAll(Seat *seat)
{
    int i;

    printf("\t\t\t\tSeating Arrangement\n\n");
    for (i=0; i<SIZE; i++)
    {
        printf("ID: %d\n", (seat+i)->ID);
        printf("Status: %s\n", (seat+i)->status);
        printf("Customer: %s\n\n", (seat+i)->customer);
    }
}

void displayEmpty(Seat *seat, int size)
{
    int i, count = 0;

    printf("\t\t\t\tSeating Arrangement\n\n");
    if (size == SIZE)
        printf("All seats are taken\n");
    else
    {
        for (i=0; (i<SIZE); i++)
        {
            if (strcmp((seat+i)->status, "EMPTY")==0)
            {
                count++;
                printf("ID: %d\n", (seat+i)->ID);
                printf("Status: %s\n", (seat+i)->status);
                printf("Customer: %s\n", (seat+i)->customer);
            }
        }
        printf("There are %d EMPTY seats\n\n", count);
    }
}

void displayAssigned(Seat *seat, int size)
{
    int i;

    printf("\t\t\t\tSeating Arrangement\n\n");
    if (size == 0)
        printf("All seats are empty\n");
    else
    {
        for (i=0; i<SIZE; i++)
        {
            if (strcmp((seat+i)->status, "TAKEN")==0)
            {
                printf("ID: %d\n", (seat+i)->ID);
                printf("Status: %s\n", (seat+i)->status);
                printf("Customer: %s\n\n", (seat+i)->customer);
            }
        }
    }
}

int assignCustomer(Seat *seat, int size)
{
    char dummy, *p;
    int i, id;
    if (size == 5)
    {
        printf("All seats taken\n");
        return 5;
    }
    else
    {
        while (1) {
            printf("Enter ID: \n");
            scanf("%d", &id);
            scanf("%c", &dummy);
            if (id < 1 || id > 5)
            {
                printf("Seat number out of range, please select again\n");
                continue;
            }
            else if (strcmp((seat + id - 1)->status, "TAKEN") == 0)
            {
                printf("This seat is already taken\n");
                continue;
            }
            else 
            {
                strcpy((seat + id - 1)->status, "TAKEN");
                printf("Enter name: \n");
                fgets((seat + id - 1)->customer, 20, stdin);
                if (strchr((seat + id - 1)->customer, '\n'))
                {
                    p = strchr((seat + id - 1)->customer, '\n');
                    *p = '\0';
                }
                size++;
            }
            break;
        }
    }
    printf("\n");
    return size;
}

void deleteOne(Seat *seat)
{
    int id;
    char dummy;

    printf("Enter ID: \n");
    scanf("%d", &id);
    scanf("%c", &dummy);
    strcpy((seat + id - 1)->status, "EMPTY");
    strcpy((seat + id - 1)->customer, "Available");
    printf("\n");
}

void deleteAll(Seat *seat)
{
    int i;

    for (i=0; i<SIZE; i++)
    {
        strcpy((seat+i)->status, "EMPTY");
        strcpy((seat+i)->customer, "Available");
    }
    printf("\n");
}