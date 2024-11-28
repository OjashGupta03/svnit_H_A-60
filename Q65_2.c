#include <stdio.h>
int main()
{
   int n,sum=0,c;
   printf("Enter number of rows of matrix:");
   scanf("%d",&n);
   printf("Enter number of column:");
   scanf("%d",&c);
   int a[n][c],b[c][n];
   printf("enter matrix A\n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<c;j++)
        {scanf("%d",&a[i][j]);}
   }
   printf("\n\n");
   printf(" Matrix A\n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
   }
   for(int i=0;i<n;i++)
   {
        for (int j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
   }
   printf(" Matrix B\n");
   for (int i=0;i<c;i++)
   {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\n");
   }
}