#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compressStr(char *str);
int main() 
{
   char str[40]; 
         
   printf("Enter a sequence of characters: \n"); 
   scanf("%s", str);
   printf("compressStr(): ");
   compressStr(str);
   return 0;
}
void compressStr(char *str)
{
    int i = 0, j = 0, count = 0, k = 0;
    char temp[40] = "";
    
    while (str[i] != '\0')
    {
        j = i;
        while (str[j] - str[i] == 0) j++;
        count = j - i;
        
        if (count > 1)
        {
            temp[k] = '[';
            temp[k+1] = (char)('0' + count);
            temp[k+2] = str[i];
            temp[k+3] = ']';
            k+=4;
        }
        else 
        {
            temp[k] = str[i];
            k++;
        }
        
        i = j;
    }

    temp[k] = '\0';
    
    printf("%s", temp);
}