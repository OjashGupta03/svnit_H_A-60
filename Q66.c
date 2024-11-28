#include <stdio.h>
int main()
{
   int n,sum=0;
   printf("Enter number of rows of matrix:");
   scanf("%d",&n);
   
   int a[n][n],b[n][n],c[n][n];
   printf("enter matrix A\n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {scanf("%d",&a[i][j]);}
   }
   printf("\n\n");
   printf(" Matrix A\n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
   }
   printf("enter matrix B\n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {scanf("%d",&b[i][j]);}
   }
   printf("\n\n");
   printf("  Matrix B \n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\n");
   }
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
   }
   printf("sum of matrix A and B \n\n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n\n");
   }
}