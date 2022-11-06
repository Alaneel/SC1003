#include <ctype.h>
#include <stdio.h>
#include <string.h>
char *insertStr(char *a, char *s);
int main()
{
   char a[40],s[40],*p;

   printf("Enter the string a: \n");
   fgets(a, 40, stdin);  
   if (p=strchr(a,'\n')) *p = '\0';
   printf("Enter the string s: \n");
   fgets(s, 40, stdin);  
   if (p=strchr(s,'\n')) *p = '\0';
   insertStr(a,s);
   printf("insertStr(): ");
   puts(a);   
   return 0;
}
char *insertStr(char *a, char *s)
{
	/*edit*/
/* Write your code here */
    int i = 0, k = 0, l = 0, count = strlen(s), minIndex = 0;
    char minChar = '\0';
    char temp[40];
    
    while ( l < strlen(a) + strlen(s))
    {
        if (count == 0) minChar = a[i];
        else if (a[i] == '\0')
        {
            k = 0;
            minChar = (char)('z'+2);
            while (s[k] != '\0')
            {
                if (s[k] == ' ') 
                {
                    k++;
                    continue;
                }
                else if (s[k] - minChar < 0)
                {
                    minChar = s[k];
                    minIndex = k;
                }
                k++;
            }
        }
        else
        {
            minChar = a[i];
            k = 0;
            while (s[k] != '\0')
            {
                if (s[k] == ' ')
                {
                    k++;
                    continue;
                }
                else if (s[k] - minChar < 0) 
                {
                    minChar = s[k];
                    minIndex = k;
                }
                k++;
            }
        }
        
        if (minChar == a[i])
        {
            temp[l] = minChar;
            i++;
            l++;
        }
        else
        {
            temp[l] = minChar;
            s[minIndex] = ' ';
            count--;
            l++;
        }
    }
    
    temp[l] = '\0';
    
    strcpy(a, temp);
    
    return a;
}