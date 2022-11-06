	/*edit*/

/*custom header*/
	/*end_edit*/
#include <stdio.h>
void decTohexStr(char *str, int num);
int main()
{
   int num,i;
   char str[20];
   printf("Enter a decimal number: \n");
   scanf("%d",&num);
   decTohexStr(str,num);
   printf("decTohexStr(): ");
   printf("%s\n",str);
   return 0;
}
void decTohexStr(char *str, int num)
{
    char hex[80], temp = '\0';
    int i = 0, j = 0, count = 0;
    
    while (num)
    {
        if (num % 16 < 10) hex[i] = (char)('0' + (num % 16));
        else hex[i] = (char)('A' + (num % 16) - 10);
        num /= 16;
        i++;
    }
    
    hex[i] = '\0';
    
    while (hex[count] != '\0') count++;
    
    for (j=0; j<count; j++)
    {
        str[j] = hex[count-j-1];
    }
}