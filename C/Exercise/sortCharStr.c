	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void sortCharStr(char *str);
int main()
{
   char str[80];
   
   printf("Enter a string: \n");
   scanf("%s",str);
   sortCharStr(str);
   printf("sortCharStr(): %s\n", str);
   return 0;
}
void sortCharStr(char *str)
{
	/*edit*/
/* Write your code here */
    int count = 0, i = 0;
    int maxIndex = 0;
    char temp = '\0';
    
    while (str[count] != '\0') count++;
    
    while (count != 0)
    {
        maxIndex = 0;
        for (i=0; i<count; i++)
        {
            if (str[i] - str[maxIndex] > 0) maxIndex = i;
        }
        temp = str[count-1];
        str[count-1] = str[maxIndex];
        str[maxIndex] = temp;
        count--;
    }

	/*end_edit*/
}