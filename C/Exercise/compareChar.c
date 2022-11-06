#include <stdio.h>
#include <string.h>
void compareChar(char *str1, char *str2, char *str3);
int main()
{
   char str1[80],str2[80],str3[80];
   
   printf("Enter the first string: \n");
   scanf("%s",str1);
   printf("Enter the second string: \n");
   scanf("%s",str2);
   compareChar(str1, str2, str3);
   printf("compareChar(): %s\n", str3);
   return 0;
}
void compareChar(char *str1, char *str2, char *str3)
{
    int i = 0, j = 0, k = 0, max = 0;
    
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') j++;

    max = (i >= j) ? i : j;
    
    for (k = 0; k < max; k++)
    {
        if (str1[k] - str2[k] > 0) str3[k] = str1[k];
        else str3[k] = str2[k];
    }
    
    str3[k]= '\0';
}