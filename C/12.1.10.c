#include <stdio.h>
#define CARRIER 1
#define SUBMARINE 2

typedef struct {
    int shipClass;
    char *name;
    int speed, crew;
} warShip;

void printShipReport(warShip);

int main()
{
    warShip ship[2];
    int i;
    ship[0].shipClass = CARRIER;
    ship[0].name = "Washington";
    ship[0].speed = 40;
    ship[0].crew = 800;
    ship[1].shipClass = SUBMARINE;
    ship[1].name = "Rogers";
    ship[1].speed = 100;
    ship[1].crew = 800;
    for (i=0; i<2; i++)
        printShipReport(ship[i]);
    return 0;
}

void printShipReport(warShip ship)
{
    if (ship.shipClass == CARRIER)
        printf("Carrier\n");
    else
        printf("Submarine\n");
    printf("\tname = %s\n", ship.name);
    printf("\tspeed = %d\n", ship.speed);
    printf("\tcrew = %d\n", ship.crew);
}
