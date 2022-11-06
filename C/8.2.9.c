#include <stdio.h>
#define ACCELERATION 32.0
int main()
{
    int timeLimit, t;
    int distance;
    printf("Enter the time limit (sec): ");
    scanf("%d", &timeLimit);
    for (t=1; t <= timeLimit; t++){
        distance = 0.5 * ACCELERATION * t * t;
        printf("Distance after %d sec is %d feet\n", t, distance);
    }
    return 0;
}