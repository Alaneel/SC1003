#include <stdio.h>

int main()
{
    char *nameptr[4] = {"Peter", "John", "Vincent", "Kenny"};
    char name[4][10] = {"Peter", "John", "Vincent", "Kenny"};
    int i,j;

    printf("Ragged Array: \n");
    for (i=0; i<4; i++)
        printf("nameptr[%d] = %s\n", i, nameptr[i]);
    
    printf("Rectangular Array: \n");
    for (j=0; j<4; j++)
        printf("name[%d] = %s\n", j, name[j]);
    return 0;
}