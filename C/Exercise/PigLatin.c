#include <stdio.h>
#include <string.h>
#define MAX_SIZE 80
void PigLatin(char *eword, char *PLword);
int main()
{
   char eword[MAX_SIZE];
   char PLword[MAX_SIZE];

   printf("Enter your English word: \n");
   scanf("%s", eword);
   PigLatin(eword, PLword);
   printf("PigLatin(): %s\n", PLword);
   return 0;
}
void PigLatin(char *eword, char *PLword)
{
	/*edit*/
/* Write your code here */
    int count = 1, i = 0, j = 0;
    
    if (strchr("aeiouy", eword[0]))
    {
        strcpy(PLword, eword);
        strcat(PLword, "ay");
    }
    else
    {
        while(strchr("aeiou", eword[count]) == NULL)
        {
            count++;
        }
        i = count;
        while (eword[i] != '\0')
        {
            PLword[j] = eword[i];
            j++;
            i++;
        }
        i = 0;
        while (eword[i] != eword[count])
        {
            PLword[j] = eword[i];
            j++;
            i++;
        }
        PLword[j] = '\0';
        strcat(PLword, "ay");
    }
}