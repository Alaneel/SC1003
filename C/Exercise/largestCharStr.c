#include <stdio.h>
#include <string.h>
#define N 20

void largeCharStr(char str[N][20], char a[N], int size);
int main()
{
   int size;
   char str[N][20],dummy;
   char a[N],i,j;
   
   printf("Enter number of strings: \n");
   scanf("%d", &size);
   scanf("%c", &dummy);
   for (i=0;i<size;i++){
      printf("Enter string %d: \n", i+1);
      scanf("%s",str[i]);
   }
   largeCharStr(str,a,size);
   printf("largeCharStr(): \n");
   for (i=0;i<size;i++) {
      printf("String %d: ",i+1);
      printf("%c\n",a[i]);
   }
   return 0;
}
void largeCharStr(char str[N][20], char a[N], int size)
{
	/*edit*/
   /* Write your code here */
   int i = 0, j = 0;
   char max;
    
   for (i = 0; i < size; i++)
   {
      j = 0;
      max = str[i][j];
      while (str[i][j] != '\0')
      {
         if (str[i][j] - max > 0) max = str[i][j];
         j++;
      }
      a[i] = max;
   }

	/*end_edit*/
}