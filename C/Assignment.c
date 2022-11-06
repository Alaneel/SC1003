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
#include <ctype.h>
#define SIZE 5

typedef struct {
    int roomID;
    int status;
    char customerName[20];
} Room;

void listOccupiedRooms(Room *seat, int *size);
void assignRoom(Room *seat, int *size);
void removeRoom(Room *seat, int *size);
void findCustomer(Room *seat);

int main()
{
    Room seat[SIZE];
    int size = 0, choice = SIZE, i = 0, id = 0;
    char *p = NULL, dummychar = 'a';

    for (i=0; i<SIZE; i++)
    {
        (seat+i)->roomID = i + 1;
        (seat+i)->status = 0;
        strcpy((seat+i)->customerName, "Available");
    }

    printf("NTU HOTEL ROOM RESERVATION PROGRAM:\n"); 
    printf("1: listOccupiedRooms()\n");
    printf("2: assignRoom()\n");
    printf("3: removeRoom()\n");
    printf("4: findCustomer()\n");
    printf("5: quit\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%c", &dummychar);
                listOccupiedRooms(seat, &size);
                break;
            case 2:
                scanf("%c", &dummychar);
                assignRoom(seat, &size);
                break;
            case 3:
                scanf("%c", &dummychar);
                removeRoom(seat, &size);
                break;
            case 4:
                scanf("%c", &dummychar);
                findCustomer(seat);
                break;
        }
    } while (choice < 5);
    return 0;
}

void listOccupiedRooms(Room *seat, int *size)
{
    int i = 0;

    printf("listOccupiedRooms():\n");
    if (*size == 0)
        printf("The hotel is empty\n");
    else
    {
        for (i=0; i<SIZE; i++)
        {
            if ((seat+i)->status == 1)
            {
                printf("roomID: %d\n", (seat+i)->roomID);
                printf("customer name: %s\n", (seat+i)->customerName);
            }
        }
    }
}

void assignRoom(Room *seat, int *size)
{
    char dummy = 'a', *p = NULL;
    int i = 0, id = 0;
    printf("assignRoom():\n");
    if (*size == 5)
    {
        printf("The hotel is full\n");
    }
    else
    {
        while (1) {
            printf("Enter a roomID between 1 and 5: \n");
            scanf("%d", &id);
            scanf("%c", &dummy);
            if (id < 1 || id > 5)
            {
                continue;
            }
            else if ((seat + id - 1)->status == 1)
            {
                printf("Occupied! Enter another roomID\n");
                continue;
            }
            else 
            {
                (seat + id - 1)->status = 1;
                printf("Enter customer name: \n");
                fgets((seat + id - 1)->customerName, 20, stdin);
                if (strchr((seat + id - 1)->customerName, '\n'))
                {
                    p = strchr((seat + id - 1)->customerName, '\n');
                    *p = '\0';
                }
                (*size)++;
                printf("The room has been assigned successfully\n");
            }
            break;
        }
    }
}

void removeRoom(Room *seat, int *size)
{
    int id = 0;
    char dummy = 'a';

    printf("removeRoom():\n");
    if (*size == 0)
        printf("All the rooms are empty\n");
    else
    {
        while (1)
        {
            printf("Enter a roomID between 1 and 5: \n");
            scanf("%d", &id);
            scanf("%c", &dummy);
            if (id < 1 || id > 5)
            {
                continue;
            }
            else if ((seat + id - 1)->status == 0)
            {
                printf("Empty! Enter another roomID for removal\n");
                continue;
            }
            (seat + id - 1)->status = 0;
            strcpy((seat + id - 1)->customerName, "Available");
            printf("Removal is successful\n");
            (*size)--;
            break;
        }
    }
}

void findCustomer(Room *seat)
{
    int id = 0, i = 0, j = 0;
    char dummy = 'a', *p = NULL, src[20], target[20];

    printf("findCustomer():\n");
    printf("Enter customer name: \n");
    fgets(target, 20, stdin);
    if (strchr(target, '\n'))
    {
        p = strchr(target, '\n');
        *p = '\0';
    }

    for (i=0; i<SIZE; i++)
    {
        strcpy(src, (seat + i)->customerName);

        for (j=0; j<20; j++)
        {
            src[j] = toupper(src[j]);
            target[j] = toupper(target[j]);
        }
        if (strcmp(src, target) == 0) 
        {
            printf("The target customer name is found\n");
            printf("roomID: %d\n", i+1);
            printf("customer name: %s\n", (seat + i)->customerName);
            return;
        }
    }

    printf("The target customer name is not found\n");
}