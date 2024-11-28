#include <stdio.h>

int main()
{
   int n,sum=0;
   printf("Enter number of rows and columns of matrix:");
   scanf("%d",&n);
   int a[n][n];
   printf("enter matrix \n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {scanf("%d",&a[i][j]);}
   }
   printf("\n\n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
   }
   for (int i=0;i<n;i++)
   {
        sum=0;
        for (int j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
        printf("sum of row %d =%d\n",i+1,sum);
    }
    
}
