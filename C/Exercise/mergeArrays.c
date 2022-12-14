#include <stdio.h>
#define M 80

int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2);

int main()
{
   int a[M],b[M],c[M],i,k=0,n1,n2;   

   printf("Enter the size of array a: \n");
   scanf("%d", &n1);
   printf("Enter the size of array b: \n");
   scanf("%d", &n2);   
   printf("Enter array a[%d]: \n", n1);
   for (i=0; i<n1; i++)
      scanf("%d",&a[i]);
   printf("Enter array b[%d]: \n", n2);
   for (i=0; i<n2; i++)
      scanf("%d",&b[i]);
   k=mergeArrays(a,b,c,n1,n2);
   printf("mergeArrays(): \n");
   for (i=0;i<k;i++)
      printf("%d ",c[i]);
   return 0;
}

int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2)
{
	/*edit*/
   /* Write code here */
    int count = 0, i = 0, j = 0;
    
    while (i + j != n1 + n2) 
    {
        if (i == n1)
        {
            c[count] = b[j];
            count++;
            j++;
        }
        else if (j == n2)
        {
            c[count] = a[i];
            count++;
            i++;
        }
        else
        {
            if (a[i] - b[j] < 0)
            {
                c[count] = a[i];
                count++;
                i++;
            }
            else
            {
                c[count] = b[j];
                count++;
                j++;
            }
        }
    }

    return count;
}