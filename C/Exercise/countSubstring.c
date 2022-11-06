#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main() 
{
   char str[80], substr[80], *p; 
   int result=INIT_VALUE;
   
   printf("Enter the string: \n"); 
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("Enter the substring: \n"); 
   fgets(substr, 80, stdin);
   if (p=strchr(substr,'\n')) *p = '\0'; 
   result = countSubstring(str, substr);
   printf("countSubstring(): %d\n", result);     
   return 0;
}
int countSubstring(char str[], char substr[])
{
    int i = 0, j = 0, k = 0, count = 0;
    int match = 1;
    
    while (substr[i] != '\0') i++;
    
    while (str[j+i-1] != '\0')
    {
        if (str[j] == substr[0])
        {
            match = 1;
            for (k=1; k<i; k++)
            {
                if (str[j+k] != substr[k]) match = 0;
            } 
            if (match == 1) count++;
        }
        j++;
    }
    
    return count;
}