	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{
	/*edit*/
   /* Write your code here */
    int i = 1;
    double tmp = 1, num = 0, sum = 1;
    
    printf("Enter x:\n");
    scanf("%lf", &num);
    
    for (i=1; i<=10; i++)
    {
        tmp *= num / i;
        sum += tmp;
    }
    
    printf("Result = %.2f\n", sum);

	/*end_edit*/

   return 0;
}