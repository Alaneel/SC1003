#include <stdio.h>
void printChart(int x, int y, int z);
int main() 
{
   int x,y,z;

   printf("Enter 3 inputs: \n");
   scanf("%d %d %d", &x, &y, &z);
   printf("The bar chart is: \n");
   printChart(x,y,z);
   return 0;
}
void printChart(int x, int y, int z)
{
	/*edit*/
   /* Write your code here */
   int maxOfTwo, maxOfThree;
   int i = 0;
   
    maxOfTwo = (x > y) ? x : y;
    maxOfThree = (maxOfTwo > z) ? maxOfTwo : z;
    
    while (maxOfThree != 0)
    {
        if (x - maxOfThree < 0) printf(" ");
        else printf("*");
        if (y - maxOfThree < 0) printf(" ");
        else printf("*");
        if (z - maxOfThree < 0) printf(" ");
        else printf("*");
        printf("\n");
        maxOfThree--;
    }
}