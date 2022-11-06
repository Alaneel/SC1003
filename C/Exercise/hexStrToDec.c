#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int hexStrToDec(char *hex);

int main()
{
   int num;
   char hex[100];
   
   printf("Enter a hexadecimal number: \n"); 
   scanf("%s", hex);
   num=hexStrToDec(hex);
   printf("hexStrToDec(): %d\n", num);
   return 0;
}

int hexStrToDec(char *hex)
{
	/*edit*/
   /* Write your code here */        
    int dec = 0, factor = 1;
    int i = 0;
    
    for (i=strlen(hex)-1; i>=0; i--)
    {
        if (isdigit(hex[i]))
        {
            dec += (hex[i] - '0') * factor;
            factor *= 16;
        }
        else if (isupper(hex[i]))
        {
            dec += (hex[i] - 'A' + 10) * factor;
            factor *= 16;
        }
        else if (islower(hex[i]))
        {
            dec += (hex[i] - 'a' + 10) * factor;
            factor *= 16;
        }
        else break;
    }
    
    return dec;
}